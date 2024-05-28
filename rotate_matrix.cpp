#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;


    int arr[n][n];

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i],arr[i]+n);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}