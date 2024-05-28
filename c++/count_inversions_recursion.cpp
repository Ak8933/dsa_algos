// #include<bits/stdc++.h>
// using namespace std;

// long long int mergeArray(long long arr[], long long int s, long long int e, long long int &count)
// {
//     long long int mid = s + (e-s)/2;

//     long long int len1 = mid - s + 1;
//     long long int len2 = e - mid;
//     long long int *first = new long long int[len1];
//     long long int *second = new long long int[len2];

//     long long int mainArrayindex = s;
//     for (long long int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainArrayindex++];
//     }
//     mainArrayindex = mid + 1;
//     for (long long int i = 0; i < len2; i++)
//     {
//         second[i] = arr[mainArrayindex++];
//     }

//     long long int index1 = 0;
//     long long int index2 = 0;
//     mainArrayindex = s;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] <= second[index2])
//         {
//             arr[mainArrayindex++] = first[index1++];
//         }

//         else
//         {
//             arr[mainArrayindex++] = second[index2++];
//             count = count + (mid - s + 1) - index1;
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[mainArrayindex++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[mainArrayindex++] = second[index2++];
//     }
//     delete[] first;
//     delete[] second;

//     return count;
// }

// long long int mergeSort(long long arr[], long long int s, long long int e, long long int &count)
// {
//     if (e > s)
//     {
//         long long int mid = s + (e-s)/2;
//         mergeSort(arr, s, mid, count);
//         mergeSort(arr, mid + 1, e, count);
//         mergeArray(arr, s, e, count);
//     }
//     return count;
// }

// long long int inversionCount(long long arr[], long long N)
// {
//     // Your Code Here
//     long long int count = 0;
//     mergeSort(arr, 0, N - 1, count);
//     return count;
// }

// int main()
// {
//     long long int n;
//     long long int brr[n];
//     cout << "Enter size: ";
//     cin >> n;
//     for (long long int i = 0; i < n; i++)
//     {
//         cin >> brr[i];
//     }
//     long long int k;
//     k = inversionCount(brr, n);
//     cout << k;
// }

#include<bits/stdc++.h>
using namespace std;

long long int mergeArray(long long arr[], long long int s, long long int e, long long int &count)
{
    long long int mid = (s + e) / 2;

    long long int len1 = mid - s + 1;
    long long int len2 = e - mid;
    long long int *first = new long long int[len1];
    long long int *second = new long long int[len2];

    long long int mainArrayindex = s;
    for (long long int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayindex++];
    }
    mainArrayindex = mid + 1;
    for (long long int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayindex++];
    }

    long long int index1 = 0;
    long long int index2 = 0;
    mainArrayindex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[mainArrayindex++] = first[index1++];
        }

        else
        {
            arr[mainArrayindex++] = second[index2++];
            count = count + (mid - s + 1) - index1;
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayindex++] = second[index2++];
    }
    delete[] first;
    delete[] second;

    return count;
}

long long int mergeSort(long long arr[], long long int s, long long int e, long long int &count)
{
    if (e > s)
    {
        long long int mid = (s + e) / 2;
        mergeSort(arr, s, mid, count);
        mergeSort(arr, mid + 1, e, count);
        mergeArray(arr, s, e, count);
    }
    return count;
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int count = 0;
    mergeSort(arr, 0, N - 1, count);
    return count;
}

int main()
{
    long long int n;
    cout << "Enter size: ";
    cin >> n;
    long long int brr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    cout<<"Inversions: ";
    long long int k;
    k = inversionCount(brr, n);
    cout << k << endl;
}
