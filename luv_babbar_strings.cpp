#include<bits/stdc++.h>
// #include<stdio.h>
// #include<string.h>
// #include<conio.h>
using namespace std ;

bool  checkPalindrome(string s, int n){
    int st=0;
    int e=n-1;
    while(st<=(e/2))
    {
        if(s[st]!=s[e]){
            return 0;
        }
        st++;
        e--;   
    }
     return 1;  
}

int main(){
    char name[20];
    cout<<"Enter name :";
    cin>>name;
    //cout<<name;
    int n=strlen(name);
    cout<<checkPalindrome(name,n);

}

