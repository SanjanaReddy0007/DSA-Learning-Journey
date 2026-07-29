#include<bits/stdc++.h>
using namespace std;

//here i < j index and prices[i] > 2*prices[j] that's the whole condition 
//solving using a merge sort..

int countProductComparisonPair(vector<int>& nums)
{
    int n = pairs.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(nums[j] > nums[i]*2L) {
                count++;
            }
        }
    }

    return count;
}

//O(n^2)
//SC :- O(1)
