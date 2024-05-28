#include <bits/stdc++.h>
using namespace std;


void mergeArray(int arr[], int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first= new int[len1];
    int *second= new int[len2];

    int mainArrayindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayindex++];
    }
    mainArrayindex = mid+1 ;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayindex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayindex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <second[index2])
        {
            arr[mainArrayindex++] = first[index1++];
        }
        
        else
        {
            arr[mainArrayindex++] = second[index2++];
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
}


void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    mergeArray(arr, s, e);
}


int main()
{

    int arr[5] = {9, 2, 9, 6, 14};
    int s = 0;
    int e = 4;

    mergeSort(arr, s, e);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}