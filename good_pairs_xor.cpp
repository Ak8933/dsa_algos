#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>A(n),B(n);
        for(int i=0;i<n;i++) cin>>A[i];
        for(int j=0;j<n;j++) cin>>B[j];

        map<long long int,long long int>freq;
        for(int i=0;i<n;i++)
        freq[A[i]^B[i]]++;

        long long int ans=0;
        for(auto i:freq)
        ans+=(i.second*(i.second-1))/2;
        cout<<ans<<endl;
    }
    return 0;
}