#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=0;
        vector<long long int>A(n);
        map<long long int, long long int>m;
        for(int i=0;i<n;i++) {
            cin>>A[i];
            m[A[i]]++;
        }
        for(auto i:m){
            if(i.second >1){
                int l=i.second;
                p+=l*(l-1)/2;

            }
        }
        cout<<p<<endl;
    }
    
    return 0;


}