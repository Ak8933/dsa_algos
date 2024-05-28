// input: azxxyyyt
// output: azxyt


#include<bits/stdc++.h>
using namespace std ;


int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    //int i=0;
    //int j=i+1;


    for(int i=0; i<s.length(); i++){
        int j=i+1;
        while(s[i]==s[j]){
            s[j]=NULL;               
            //i=0;
        }
        i=0;
        j=i+1;
    }
    cout<<s;
}