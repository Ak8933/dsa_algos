#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int minStringFactor(char X[MAX_LENGTH], char Y[MAX_LENGTH], int S, int R) {
    int n = strlen(X);

    // Initialize dp table
    int dp[MAX_LENGTH + 1];
    for (int i = 1; i <= n; i++) {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (size_t j = i; j > 0; j--) {
            char subStr[MAX_LENGTH];
            strncpy(subStr, &X[i - j], j);
            subStr[j] = '\0';

            // Check if subStr can be formed from Y
            int found = 0;
            for (size_t k = 0; k <= strlen(Y) - j; k++) {
                if (strncmp(&Y[k], subStr, j) == 0) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                dp[i] = dp[i] < (dp[i - j] + S) ? dp[i] : (dp[i - j] + S);
            }

            // Check if subStr in reversed order can be formed from Y
            char revSubStr[MAX_LENGTH];
            for (size_t k = 0; k < j; k++) {
                revSubStr[k] = subStr[j - 1 - k];
            }
            revSubStr[j] = '\0';

            found = 0;
            for (size_t k = 0; k <= strlen(Y) - j; k++) {
                if (strncmp(&Y[k], revSubStr, j) == 0) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                dp[i] = dp[i] < (dp[i - j] + R) ? dp[i] : (dp[i - j] + R);
            }
        }
    }

    // If dp[n] is still INT_MAX, it means it's impossible to form X from Y
    if (dp[n] == INT_MAX) {
        return -1; // Assuming -1 represents "Impossible"
    }

    return dp[n];
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char X[MAX_LENGTH];
        char Y[MAX_LENGTH];
        int S, R;

        scanf("%s %s %d %d", X, Y, &S, &R);

        // Output the result for each test case
        int result = minStringFactor(X, Y, S, R);
        printf("%d\n", result);
    }

    return 0;
}






#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>dp(10001,vector<int>(10001,-1));

int helper(int i,int j, int S, int R, string &X, string &Y, string &reversed){
  if(i>j) return 0;
  if(dp[i][j] != -1){
    return dp[i][j];
  }
  int minimum = INT_MAX;
  for(int k=i; k<=j; k++){
    if(reversed.find(X.substr(i,k-i+1))!=string::npos)
      minimum = min(minimum,R + helper(k+1,j,S,R,X,Y,reversed));
    if(Y.find(X.substr(i,k-i+1))!= string::npos)
      minimum = min(minimum,S + helper(k+1,j,S,R,X,Y,reversed));
  }
  return minimum;
}

int solve(int S, int R, string X, string Y){
  string reversed = Y;
  reverse(reversed.begin(),reversed.end());
  return helper(0,X.size()-1,S,R,X,Y,reversed);
}

int main(){
  string X,Y;
  cin>>X>>Y;
  int S,R;
  cin>>S>>R;
  int ans = solve(S,R,X,Y);
  cout<<ans;
  return 0;
}