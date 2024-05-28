#include<bits/stdc++.h>
using namespace std;


bool linearSearch(int arr[],int size,int k){

    //base case
    if(size==0) return false;

    if(arr[0]==k) return true;
    else{
         return linearSearch(arr+1,size-1,k);
    }
}

int main(){
    int arr[10]={2,53,6,8,3,9};

    int k;
    cin>>k;

    int size=6;
    bool ans=linearSearch(arr,size,k);
    cout<<ans;

}