#include<bits/stdc++.h>
using namespace std;


int subarrSumToK(vector<int>& nums, int k)
{
    int n = nums.size();
    long long count = 0;
    int xor = 0;
    unordered_map<int,int>m;
    m[xor]++;

    for(int i = 0; i < n; i++) {
        xor = xor ^ nums[i];
        int x = xor ^ k;
        count += m[x];
        m[xor]++;
    }

    return count;
}

//O(n)
//O(1)
