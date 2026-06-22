#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void bubbleSort(int arr[], int n){
        //Write your code here...
        for(int i=n-1;i>=1;i--){
            bool is_sorted=true;
            for(int j=0 ;j<=i-1;j++){
                if(arr[j] > arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    is_sorted=false;
                }
            }
            
            if(is_sorted) break;
        }
    }
};
