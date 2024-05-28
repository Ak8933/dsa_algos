#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, k=0;
        cin >> n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;
                if (count >= 4)
                {
                    k = 1;
                    break;
                }
            }
        }
        if (k)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}