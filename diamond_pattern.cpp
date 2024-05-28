#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;

    int blank = n - 1;

	
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0;j < blank; j++)
			cout << " ";

		for (int j = 0; j <= i; j++)
			cout << "* ";

		cout << endl;
		blank--;
	}

	
	blank = 0;

	
	for (int i = n; i > 0; i--)
	{
		
		for (int j = 0; j < blank; j++)
			cout << " ";

		
		for (int j = 0;j < i;j++)
			cout << "* ";

		cout << endl;
		blank++;
	}
	
	return 0;
}

