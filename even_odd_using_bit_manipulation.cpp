#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a&1==1)
    cout<<"odd"<<endl;
    else
    cout<<"even"<<endl;
}
// if u want to swap two numbers using bit manipulation then 1.a=a^b 2.b=a^b 3.a=a^b