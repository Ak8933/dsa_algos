
#include<bits/stdc++.h>
using namespace std;

unsigned int onesComplement(unsigned int n)
{

int number_of_bits = floor(log2(n))+1;


return ((1 << number_of_bits) - 1) ^ n;
}

int main()
{
unsigned int n = 22;
cout << onesComplement(n);
return 0;
}
