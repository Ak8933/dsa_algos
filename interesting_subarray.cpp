#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   long long int arr[n]; 
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
 
    int min = INT_MAX, max = INT_MIN;
    for (int i: arr)
    {
        if (i < min) {
            min = i;
        }
 
        if (i > max) {
            max = i;
        }
    }
 
    cout<<(min*min)<<" "<<(max*max)<<endl;
    }+ bn 
               
    return 0;
}