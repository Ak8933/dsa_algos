// 1st approach 



#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
/* 
int highestpowerof2(int n){
    int res=0;
    for(int i=n;i>=1;i--){
        if ((i&(i-1))==0){
            res=i;
            break;
        }
    }
return res;
}
int main(){
    int n=10;
    cout<<(highestpowerof2(n));
    return 0;
}

*/






// 2nd Approach



int highestpowerof2(int n){
    int p= (int)log2(n);
    return (int)pow(2,p);
}
int main(){
    int n=10;
    cout<<abs((highestpowerof2(n)));
    return 0;
}











