#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    
    void merge(int arr[],int left,int right) {
        int i = left;
        int j = mid + 1;
        int k = 0;
        
        int n = right + left - 1;
        int new_arr[n];
        
        while(i <= mid && j <= right) {
            if(arr[i] < arr[j]) {
                new_arr[k] = arr[i];
                i++;
                k++;
            }else{
                new_arr[k] = arr[j];
                j++;
                k++;
            }
        } 
        
        while(i <= mid) {
            new_arr[k] = arr[i];
            i++;
            k++;
        }
        
        while(j <= right) {
            new_arr[k] = arr[j];
            j++;
            k++;
        }
        
        for(int c = 0; c < n ; c++) {
            arr[left + c] = new_arr[c];
        }
        
    }
    
    
    void mergeSortRecursion(int arr[] , int left , int right) {
        if(left >= right) return;
        int mid = (left + right) / 2;
        mergeSortRecursion(arr,left,mid);
        mergeSortRecursion(arr,mid + 1,right);
        merge(arr,left,mid,right);
    }
    
    void mergeSort(int arr[], int n){
        //Write your code here...
        
        mergeSortRecursion(arr , 0 , n - 1);
    }
};
