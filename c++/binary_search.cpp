#include<bits/stdc++.h>
using namespace std;

int binary(int arr[], int key){
    int l = 0;
    int r = 7;
    int mid = l + (r-l)/2;
    while(l<=r){
        if(mid==key){
            return mid;
        }
        if(mid>key){
            //search in left half of array
            r=mid - 1;
        }
        else{
            l = mid + 1;
        }
        mid = l + (r-l)/2; 
    }
    return -1;
}
 
int main(){

    int arr[]={1,2,3,4,5,6,7};
    cout<<binary(arr,6)<<endl;

return 0;
}