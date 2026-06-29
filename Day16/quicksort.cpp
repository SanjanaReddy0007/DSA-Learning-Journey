#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i]<=arr[low] &&  i<=high-1)
        {
            i++;
        }
        while(arr[j]>arr[low] && j>=1)
        {
            j--;
        }
        if(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quick_Sort(int arr[],int low, int high)
{
    if(low<high)
    {
        int j = partition(arr,low,high);
        quick_Sort(arr,low,j-1);
        quick_Sort(arr,j+1,high);
    }
}

