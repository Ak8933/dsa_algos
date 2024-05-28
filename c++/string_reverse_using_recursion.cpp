#include<bits/stdc++.h>
using namespace std;

void stringReverse(string &s,int st,int e){
    if(st>e) return;

    else{
         swap(s[st],s[e]);
        st++;
        e--;
        stringReverse(s,st,e);

    }    
}
int main(){
    string s;
    cin>>s;

    int n=s.length();

    stringReverse(s,0,n-1);
    cout<<s;
}