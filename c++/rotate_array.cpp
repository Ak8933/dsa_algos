#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //code here
    int arr[5] = {1,3,6,7,8};
    int temp[5]={0,0,0,0,0};
    
    //rotate(arr,arr+2,arr+5);
    // desired output  -->   6 7 8 1 3
    //i-k

    for(int i=0; i<5; i++){
        // temp[(i+2)%5]=arr[i]; -->  to shift right
        if(i-2 >= 0){
            temp[i-2] = arr[i];
        }
        else{
            temp[(5+i-2)%5] = arr[i];
        }
    }
    
    for(int i=0; i<5; i++){
        cout<<temp[i]<<" ";
    }
return 0;
}