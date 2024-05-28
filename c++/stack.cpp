#include<bits/stdc++.h>
using namespace std;
 
int main(){
    stack<char>st;
    string s = "absde";
    stack<char>comp;
    st.push(s[2]);
    comp.push(s[3]);
    bool check = st.top() > comp.top();
    cout<<check<<" ";
return 0;
}