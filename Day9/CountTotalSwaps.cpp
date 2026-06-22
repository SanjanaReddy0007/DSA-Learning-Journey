#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countSwaps(int arr[], int n){
        //Write your code here...
        int swaps=0;
        for(int i=1;i<=n-1;i++){
            int j=i;
            while((arr[j-1] > arr[j]) && j>=1 ){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                swaps++;
                j--;
            }
            
        }
        
        return swaps;
        
    }
};

