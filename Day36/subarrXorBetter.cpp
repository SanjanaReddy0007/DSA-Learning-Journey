#include<bits/stdc++.h>
using namespace std;


int subarrSumtoKXOR(vector<int>& numss, int k)
{
    int n = nums.size();
    long long count = 0;

    for(int i = 0; i < n; i++) {
        int xor = 0;

        for(int j = i; j < n; j++) {
           xor = xor ^ nums[j];
        }

        if(xor == k) count++;
    }

    return count;
}

//O(n^2)
//O(1)


