// Case Insensitive Palindrome Checking





#include <bits/stdc++.h>
using namespace std;

bool valid(char ch)
{
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}






char tolowercase(char ch)
{
  if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
  {
    return ch;
  }
  else
  {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}





// string removewhitespecialchar(string k){
//   string temp;
//   for(int i=0;i<k.size();i++){
//     if((k[i]>='a'&&k[i]<='z')||(k[i]>='A'&&k[i]<='Z')||(k[i]>='0'&&k[i]<='9')){
//       temp.push_back(k[i]);
//     }
//     else{
//       continue;
//     }
//   }
//   return temp;
// }






bool checkPalindrome(string s)
{

  string temp = "";
  for (int i = 0; i < s.length(); i++)
  {
      if (valid(s[i]))
      {
        temp.push_back(s[i]);
      }
    
  }

  for (int i = 0; i < temp.length(); i++)
  {
    temp[i] = tolowercase(temp[i]);
  }
 





//temp.erase(remove(temp.begin(), temp.end(), ' '), temp.end()); 

  int st = 0;
  int e = temp.length() - 1;

  while (st <= e)
  {

    if ((temp[st]) != (temp[e]))
    {
      return 0;
    }
    else
    {
      st++;
      e--;
    }
  }
  return 1;
}







int main()
{
  string s;
  cout << "Enter string to check palindrome: ";
  getline(cin,s);
  //cin >> s;
  // string lo=removewhitespecialchar(s);
  cout << checkPalindrome(s);
}
