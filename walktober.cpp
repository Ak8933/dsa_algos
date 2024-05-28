#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int m,n,p;
    cin>>m>>n>>p;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        
        int maxi=0;
        for(int j=0;j<m;j++){
            maxi = max(maxi,a[j][i]);
        }
        if(a[p-1][i]<maxi){
            ans+=maxi-a[p-1][i];
        }
    }
    cout<<ans<<endl;
    }
}