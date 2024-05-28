#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string str;
    cin>>str;
    cout<<"I am string "<<str<<endl;
    int k=stoi(str);
    cout<<"I am int "<<k<<endl;
    string s=to_string(k);
    cout<<"I am again an string "<<s<<endl;
return 0;
}

//For int to string we can use tostring() function.