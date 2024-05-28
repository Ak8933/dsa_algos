#include <bits/stdc++.h>
using namespace std;
//map stores in increasing order whether it is string type key or  integer type key 
int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[2] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[5]="abc";
    for(auto &it : m){
        cout << it.first << " " << it.second <<endl;

    }
    // another method of printing map
   /* map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << " " << it->second <<endl;
    } */
}