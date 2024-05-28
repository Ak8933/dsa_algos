#include<bits/stdc++.h>
using namespace std;


class myclass{
    int n,i,f;
    public:
    void fact(){
        f=1;
        cout<<"Enter a number to find factorial -> ";
        cin>>n;
        for(i=1;i<=n;i++){
            f*=i;
        }
        cout<<"Factorial of " <<n <<" is -> "<<f;
    }
};


int main(){
    myclass obj;
    obj.fact();

}