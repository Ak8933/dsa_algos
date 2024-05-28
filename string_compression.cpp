//input-> aaabxxxtttt
//output->a3bx3t4

#include<bits/stdc++.h>
using namespace std;


int main(){
   vector<char> chars;
   int n;
   cin>>n;

   char cha;
   for(int i=0;i<n;i++){
    cin>>cha;
    chars.push_back(cha);
   }
    int i=0;
    int ansIndex=0;
    while(i<s.length()){
        int j=i+1;
        while(s[i]==s[j]&&j<s.length()){
            j++;
        }

        //yaha kab aaoge ya to new character mila
        //ya fir vector pura traverse kr dia



        //old char store kr lo
        chars[ansIndex++]=chars[i];

        int count=j-i;
        if(count>1){
            //convertng count to string
            string cnt=to_string(count);
            for(char ch:cnt){
                chars[ansIndex++]=ch;
            }
        }
        i=j;

        
    }
  for(int i=0;i<ansIndex;i++){
    cout<<chars[i];

  }

}