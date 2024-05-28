#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>dp;
int solve(int n,int i, int prev, vector<int>&a){
    if(i==n)return 0;
    if(dp[i][prev+1]!=-1)return dp[i][prev+1];
    int take = 0;
    if(prev==-1 or prev!=i-1)take = a[i]+solve(n,i+1,i,a);
    int no = solve(n,i+1,prev,a);
    return dp[i][prev+1] = max(take,no);
}

int solveTab(vector<int>&a, int n){
    vector<vector<int>>dp(n+1,vector<int>(n,0));
    for(int prev=-1; prev<n; prev++){
        for(int curr=0; curr<n; curr++){
            int take = 0;
            if(prev==-1 or prev!=curr-1)take = a[curr]+dp[curr+1][curr];
            int no = dp[curr+1][curr+1];
            dp[prev+1][curr]=max(take,no);
        }
    }
    return dp[0][n-1];
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    dp.assign(n,vector<int>(n+1,-1));
    int x = solveTab(a,n);
    cout<<x<<endl;
return 0;
}