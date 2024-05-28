#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][3];
    //i loop according to no. of rows
    for(int i=0;i<3;i++){
        //j loop according to no. of rows
        for(int j=0;j<2;j++){
            //now check how u want elements to be put into ur array.
            cin>>arr[j][i];
        }
    }
    //print
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

}