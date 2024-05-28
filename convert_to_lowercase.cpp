#include<bits/stdc++.h>
using namespace std;

char tolowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
        return ch-'A'+'a';
}

int main(){
    cout<<tolowercase('M');
}
