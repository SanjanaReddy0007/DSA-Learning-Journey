#include <bits/stdc++.h>
using namespace std;


void merge(vector<int>& A, int start, int mid, int end) {
    int left_size = mid - start + 1;
    int right_size = end - mid;
    int L[left_size], R[right_size];
    
    for(int i = 0; i < left_size; i++) {
        L[i] = A[start + i];
    }
    for(int j = 0; j < right_size; j++) {
        R[j] = A[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    for(int k = start; k <= end; k++) {
       if(j >= right_size || (i < left_size && L[i] <= R[j])) 
         A[k] = L[i]++;
      else:
         A[k] = R[j]++;
    } 
}


int merge_and_count(vector<int>&A, int start, int end) {
    int count = 0;
    if(start < end) {
        int mid = (start + end) / 2;
        count = merge_and_count(A,start,mid) + merge_and_count(A, mid + 1, end);
        int j = mid + 1;
        for(int i = 0; i <= mid; i++) {
            while(j <= end && A[i] > 2*A[j]) 
              j++;
            count += j - (mid + 1);
        }
        merge(A,start,mid,end);
    }

    return count;
}


int productPair(vector<int>& prices) {
    int n = prices.size();
    return merge_and_count(prices,0 , n - 1);
}


//O(nlogn) Tc
//SC :- O(n)
