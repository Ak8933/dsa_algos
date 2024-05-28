
#include <bits/stdc++.h>
using namespace std;

// typedef long long ll;
// #define v vector<int>
// #define all(a) (a).begin() , (a).end()
// #define sz(a) ((int)((a).size()))

// const long long INF = 4e18;

// vector<int> dp(10001, -1);

// int helper(int i, int j, int S, int R, string &X, string &Y, string &reversed) {
//     if (i > j) return 0;
//     int &result = dp[j];
//     if (result != -1) {
//         return result;
//     }
//     int minimum = INT_MAX;
//     for (int k = i; k <= j; k++) {
//         if (reversed.find(X.substr(i, k - i + 1)) != string::npos)
//             minimum = min(minimum, R + helper(k + 1, j, S, R, X, Y, reversed));
//         if (Y.find(X.substr(i, k - i + 1)) != string::npos)
//             minimum = min(minimum, S + helper(k + 1, j, S, R, X, Y, reversed));
//     }
//     return result = minimum;
// }





int solve(int S, int R, string X, string Y) {
    int n = X.size();
    string reversed = Y;
    reverse(reversed.begin(), reversed.end());

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MAX));
    
    for (int i = 0; i <= n; i++) {
        dp[i][i] = 0;
    }

    for (int len = 1; len <= n; len++) {
        for (int i = 0; i <= n - len+1 ; i++) {
            int j = i + len - 1;
            for (int k = i; k < j; k++) {
                if (reversed.find(X.substr(i, k - i + 1)) != string::npos)
                    dp[i][j] = min(dp[i][j], R + dp[k + 1][j]);
                if (Y.find(X.substr(i, k - i + 1)) != string::npos)
                    dp[i][j] = min(dp[i][j], S + dp[k + 1][j]);
            }
        }
    }

    return dp[0][n-1];
}
// int solve(int s , int r , string x, string y)
// {
//     string y1 = y;
//     reverse(y1.begin(),y1.end());
//     return helper(0 , x.size()-1 , s, r , x , y , y1);
// }

int main(){

    // ios_base::sync_with_stdio(false);  
    // cin.tie(NULL);

    string x , y;
    cin >> x >> y;
    int s, r;
    cin >> s >> r;
    int ans = solve(s , r, x , y);
    cout << ans;

    return 0;

}



// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp(10001,vector<int>(10001,-1));

// int helper(int i,int j, int S, int R, string &X, string &Y, string &reversed){
//   if(i>j) return 0;
//   if(dp[i][j] != -1){
//     return dp[i][j];
//   }
//   int mini = INT_MAX;
//   for(int k=i; k<=j; k++){
//     if(reversed.find(X.substr(i,k-i+1))!=string::npos)
//       mini = min(mini,R+helper(k+1,j,S,R,X,Y,reversed));
//     if(y.find(X.substr(i,k-i+1))!= string::npos)
//       mini = min(mini,S+helper(k+1,j,S,R,X,Y,reversed));
//   }
//   return mini;
// }

// int solve(int S, int R, string X, string Y){
//   string reversed = Y;
//   reverse(reversed.begin(),reversed.end());
//   return helper(0,X.size()-1,S,R,X,Y,reversed);
// }

// int main(){
//   string X,Y;
//   cin>>X>>Y;
//   int S,R;
//   cin>>S>>R;
//   int ans = solve(S,R,X,Y);
//   cout<<ans;
//   return 0;
// }