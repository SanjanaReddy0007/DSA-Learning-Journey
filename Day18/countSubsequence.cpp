#include<bits/stdc++.h>
using namespace std;


//counts the sum==k of numbers how many
int subSequenceWithSumK(int i,int sum,int n,int k,int arr[]) {
    if(i>=n) {
        if(sum == k) {
            return 1;
        }
        return 0;
    }
   
    sum += arr[i];
    int left = subSequenceWithSumK(i+1,sum,n,k,arr);

   sum -= arr[i];
   int right = subSequenceWithSumK(i + 1, sum,n,k,arr);


   return right + left;


}




int findSumWithK(int n,int k,int arr[]) {
    return subSequenceWithSumK(0,0,n,k,arr);
}



//TC :- O(2^n) pick or not pick , creates with recursion tree with subsequence with sum==k
//O(n)

