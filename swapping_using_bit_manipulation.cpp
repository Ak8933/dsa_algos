#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=8,b=7;
    cout<<"values before swapping  "<<a<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"values after swapping  " <<a<<b<<endl;
}