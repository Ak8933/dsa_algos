#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n][n];

    int total=n*n;
    int count=0;

// 2D Matrix->
//     1  2  3  4  
//     5  6  7  8
//     9 10 11 12
//    13 14 15 16

//Spiral print output->
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

   // vector<int>ans;

    int startingrow=0;
    int endingcol=n-1;
    int endingrow=n-1;
    int startingcol=0;

    cout<<"\n Spiral Print Output ->"<<endl;

    while(count<total){
        
        //print starting row
         for(int index=startingcol;index<=endingcol && count<total;index++){
        cout<<arr[startingrow][index]<<" ";
        count++;
    }
    startingrow++;

        //print ending column
    for(int index=startingrow;index<=endingrow && count<total;index++){
        cout<<arr[index][endingcol]<<" ";
        count++;
    }
    endingcol--;

    //print endingrow

    for(int index=endingcol;index>=startingcol && count<total;index--){
        cout<<arr[endingrow][index]<<" ";
        count++;
    }
    endingrow--;

    //print startingcol
    for(int index=endingrow;index>=startingrow && count<total ;index--){
        cout<<arr[index][startingcol]<<" ";
        count++;
    }
    startingcol++;
    

    }

   
}