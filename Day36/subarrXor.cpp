#include<bits/stdc++.h>
using namespace std;

int subarrayGivenXor(vector<int>& nums, int k)
{
    int n = nums.size();
    long long count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int xor = 0;

            for(int z = i; z <= j; z++) {
                xor = xor ^ nums[z];
            }

            if(xor == k) {
               count++;
            }
        }
    }

    return count;

}


//TC : O(n^3)
//SC :- O(1)

