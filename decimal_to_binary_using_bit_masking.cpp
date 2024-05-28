#include <bits/stdc++.h>
using namespace std;

int main(){
int decimal, var;
cin>>decimal;
for(int i=31; i>=0;i--){
    var=decimal>>i;
    if(var&1) {
         cout<<"1";
    }
    else {
    cout<<"0";
    }
}
   }