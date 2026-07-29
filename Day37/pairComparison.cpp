#include<bits/stdc++.h>
using namespace std;


int productPairComparison(vectoR<int>& nums)
{
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(nums[j] > 2*nums[i]) {
                count++;
            }
        }
    }

    return count;

}

//O(n^2)
//O(1)
