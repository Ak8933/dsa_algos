#include <bits/stdc++.h>
using namespace std;

int subsequences(string str, string out[]){
    if(str.length()==0){
        out[0]="";
        return 1;

    }
    int smallerOutputSize=subsequences(str.substr(1),out);

    for(int i=0;i<smallerOutputSize;i++){
        out[i+smallerOutputSize]=str[0]+out[i];
    }
    return 2*smallerOutputSize;
}

int main(){
    string output[1000];
    int outputSize=subsequences("abc",output);
    for(int i=0;i<outputSize;i++){
        cout<<output[i]<<endl;
    }
}