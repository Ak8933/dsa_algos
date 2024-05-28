#include<bits/stdc++.h>
using namespace std ;


// 1 2 3 ->6
// 4 5 6 ->15
// 7 8 9 ->24
// | | |
// ^ ^ ^
// 12 15 18

int main(){
    int arr[3][3];
    cout<<"Enter elements: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }


int largestrowsum=0;
int lindex=-1;

//Row wise sum
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
       // cout<<"The sum of row no."<< i+1<< " is: "<< sum<<endl;
        if(sum>largestrowsum){
            lindex=i;
        }
        largestrowsum=max(largestrowsum,sum);

        
        
    }

    cout<<"largest row sum is: "<<largestrowsum<<" and the row no. is "<<lindex+1;

//Column wise sum
//  for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[j][i];
//         }
//         cout<<"The sum of col no."<< i+1<< " is: "<< sum<<endl;
//     }



}