#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];

    for (int i=0;i<n;i++) cin>>ar[i];

    map<int,int> m;

    for(int i=0;i<n;i++){
        m[ar[i]]++;

    }
    for(auto it:m){
        cout<<it.first<<"->"<<it.second<<endl;
    }

}