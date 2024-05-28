#include <bits/stdc++.h>
using namespace std;

int arrSum(int arr[], int size)

     //int sum = 0;
{

   // int sum=0;


    if (size == 0)
        return 0;


    if (size == 1)
        return arr[0];
    else
    {
       // int sum = 0;
       // sum += arrSum(arr + 1, size - 1, sum);
        int sum=arr[0]+arrSum(arr + 1, size- 1);
        return sum;
        
    }

    // cout<<" "<<arr[digit];

    
}

int main()
{

    int arr[5] = {1, 4, 6, 7, 9};

    //int sum=0;

    cout << arrSum(arr, 5);
}