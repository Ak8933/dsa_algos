#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;


    int arr[n][n];

    cout<<"Enter elements of matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enter element to search: ";
    int k;
    cin>>k;

    int start = 0;
    int end= (n*n)-1;

    int mid= start + (end-start)/2 ;
    while(start<=end){

        int element =arr[mid/n][mid%n];


        if(element==k){
            cout<<"1";
            return 0;
        }

        else if(element<k){
            start=mid+1;
        }
        else if(element>k){
            end=mid-1;
        }

        mid=start + (end-start)/2 ;



    }
    cout<<"0";

   




}