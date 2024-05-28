#include <bits/stdc++.h>
using namespace std;

int main(){
        int a,b,n,count=0;
        cin>>a>>b>>n;
        
    if(a<b)

    
    
        while((a<b)&&(a!=b)){
            if(n>1){
        for (int i=n/2;i<n;i++){
            a=a^i;
            count++;

        }
    }
       }
    else if(a==b){
         cout<<count<<endl;
    }
         
    else{
        cout<<"-1"<<endl;
    }
}      
