#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
    int n;
    cout<<endl;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl;
    int v[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
     int key;
    cout<<"Enter element to search: ";
    cin>>key;
    cout<<endl;

    cout<<"First Occurrence: ";


    // *******First Method of finding first and last occurrence *********

    // cout<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
    // cout<<endl;
    // cout<<"Last Occurrence: ";
    // cout<<upper_bound(v.begin(),v.end(),2)-v.begin()-1<<endl;
    // cout<<endl;
    // cout<<"Ans of Binary Search is: " <<binary_search(v.begin(),v.end(),3);



    //*******Second method of finding first and last occurrence*********
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(v[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(v[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<<ans;
return 0;
}