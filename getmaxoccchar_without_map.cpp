#include<bits/stdc++.h>
using  namespace std;




int main(){

    int  arr[26]={0};
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        int num=0;
        if(s[i]>='a'&&s[i]<='z'){
            num=s[i]-'a';

        }
        else {
            num=s[i]-'A';
        }
        arr[num]++;
    }
    int maxi=-1;
    int maxIndex=-1;

 

    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            maxIndex=i;
            maxi=arr[i];
        }
    }
    cout<<char('a' + maxIndex);
}