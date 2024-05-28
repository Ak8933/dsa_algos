#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string to reverse: ";
    getline(cin, s);
    int l=0, r = 0;
    // int k=s.length();
    // for(int i=0;s[i]==' ' && i<k;i++){
    //     //j=i;

    //     string sub=s.substr(j,i);
    //     reverseString(sub);
    //     j=i;

    // }

    // string secsub=s.substr(i,k);
    // reverseString(secsub);
    while (l < s.size())
    {
        while (r < s.size() && s[r] != ' '){
             r++;
        }
            reverse(s.begin() + l, s.begin() + r);
            l = r + 1;
            r = l;       
    }
   // reverse(s.begin()+r,s.end());
    cout<<s;
}