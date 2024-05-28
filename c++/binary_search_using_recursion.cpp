#include<bits/stdc++.h>
using namespace std;


bool binarySearch(int arr[],int start,int end,int k){
    //base case
    if(start>end) return 0;

    int mid= start + (end-start)/2;

    if(arr[mid]==k) return 1;
    else if(arr[mid]>k){
        return binarySearch(arr,start,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,end,k);
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};

    int start=0;
    int end=5;
    //int mid = start + (end-start)/2;
    int k;
    cin>>k;

    cout<<binarySearch(arr,start,end,k);

}