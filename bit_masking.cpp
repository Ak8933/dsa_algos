#include <bits/stdc++.h>
using namespace std;

// finding i'th bit

// int main(){
//     int a,n,mask=0;
//     cin>>a>>n;
//      mask=1<<n;
//     if((mask&a)==0)
//      cout<<"0"<<endl;
//     else
//      cout<<"1"<<endl;
// }



//clear i'th bit

// int main(){
//     int a,n,mask=0;
//     cin>>a>>n;
//     mask=~(1<<n);
//     int res=a&mask;
//     cout<<res<<endl;
// }

//find number of bits to change to convert a to b.

int main(){
    int a,b,c;
    cin>>a>>b;
c=a^b;
int res= (log2(c))+1;
cout<<res<<endl;
}
// 1000
// 0011
