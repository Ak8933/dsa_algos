#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[],int s, int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }

    }
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s, int e,int n){
    if(s>=e) return ;
     print(arr,n);
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1,n);
    quickSort(arr,p+1,e,n);
}

int main(){
    int arr[10]={2,3,1,4,5,6,3,8,9,7};
    int n=10;
    quickSort(arr,0,n-1,n);
    print(arr,n);

}