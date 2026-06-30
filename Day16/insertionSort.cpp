#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void insertionSort(int arr[], int n){
        //Write your code here...
        for(int i=1;i<=n-1;i++){
            int j=i;
            while(j>=1 && (arr[j-1] > arr[j])){
                int temp=arr[j-1];
                arr[j-1] = arr[j];
                arr[j]=temp;
                j--;
            }
        }
    }

};

