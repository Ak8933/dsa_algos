#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
int main(){
    int n,m,x,y,a,b;
    cin>>n>>m>>x>>y>>a>>b ;
    int thief = n-x + m-y;
    int police = max(n-a,m-b);
    if (thief > police ){
        cout<< "no"<<endl;
    }
    else {
        cout<< "yes"<<endl;
    }
    return 0;
}