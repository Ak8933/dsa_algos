#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,flag=1,x;
    cin>>n>>x;
    int ar[n];
    for (int i=0;i<n;i++){
        cin>>ar[i];

    }
    for(int i=0;i<n;i++){
        if(ar[i]>ar[i+1]){
            if((ar[i]+ar[i+1])>x){
                flag=0;
                break;
            }
            else {
                swap(ar[i],ar[i+1]);
            }
        }
    }

    if (flag==0){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }


}