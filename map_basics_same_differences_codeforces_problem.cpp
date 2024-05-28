#include <bits/stdc++.h>
using namespace std;

//Time complexity needed 0(nlogn)

int main(){
    int n;
    cin>>n;
     int ar[n];
     unordered_map<int,int>m;
     int ans=0;

     for (int i=0;i<n;i++){
        cin>>ar[i];
       m[ar[i]-(i+1)]++;
     }
     
     for(auto it:m){
        int a= it.second;
        ans+=(a*(a-1))/2;
     }
     cout<<ans<<"\n";

}