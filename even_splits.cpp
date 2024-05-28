#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string str;
        cin>>str;
        if(n<=2){
            cout<<str<<endl;
            return 0;
        }
        sort(str.begin(),str.end());
        cout<<str<<endl;
        return 0;

        
        }
        }
        