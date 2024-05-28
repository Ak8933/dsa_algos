#include<bits/stdc++.h>
using namespace std;

// lcm(a,b) * gcd(a,b) = a*b

int gcd(int a, int b){
    if(a==0)return b;
    if(b==0)return a;
    while(a!=b){
        if(b>a){
            b-=a;
        }
        else{
            a-=b;
        }
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans= gcd(a,b);
    cout<<ans;
}