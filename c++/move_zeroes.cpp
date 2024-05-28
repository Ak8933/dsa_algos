#include <iostream>
using namespace std;
 
// 0,1,0,3,12
// 1,3,12,0,0

int main(){
    int nums[5]={3,1,0,0,12};
    int i=0;
    for(int j=0;j<5;j++){
        if(nums[j]!=0){
            swap(nums[i++],nums[j]);
        }
        for(int k=0;k<5;k++){
            cout<<nums[k]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}