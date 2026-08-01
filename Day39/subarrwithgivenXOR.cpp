#include<bits/stdc++.h>
using namespace std;

int subarraywithGivenXOR(vector<int>& nums, int k)
{
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int xor = 0;
            for(int k = i; k<= j; k++) {
                xor = xor ^ nums[k];
            }

            if(xor == k) count++;
        }
    }

    return count;
}

//TC :- O(n^3)
//SC :- O(1)

