#include<bits/stdc++.h>
using namespace std;



string reverseString(string s){
    int st=0;
    int e=s.size()-1;
    while(st<e){
        swap(s[st++],s[e--]);
    }
    return s;
}



// void process_vector(vector<char> vec) {
//     // processing the vector
//     for (char c : vec) {
//         cout << c << " ";
//     }
// }

// int main() {
//     string str = "hello";
//     vector<char> vec(str.begin(), str.end());
//     process_vector(vec);
//     return 0;
// }




int main(){
    // cout<<reverseString("sanam");
    string s="sanam";
    cout<<reverseString(s);
}