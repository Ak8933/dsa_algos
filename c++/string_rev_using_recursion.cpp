#include<bits/stdc++.h>
using namespace std;

void reverse(string &s,int i,int j){
    //base case
    if(i>j){
        return;
    }
    //1 case solve
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
 
int main(){
    string s;
    cin>>s;
    int n = s.length();
    reverse(s,0,n-1);
    cout<<s<<" "<<endl;
return 0;
}