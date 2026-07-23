#include<bits/stdc++.h>
using namespace std;


int wraggleSubsequence(vecot<int>&arr)
{
    int n = nums.size();
    int inc = 1, decr = 1;

    //wraggle means hv to substract nd finsd the val from previous here 
    for(int i = 1; i < n; i++) {
        if(nums[i] > nums[i - 1]) {
            inc = decr + 1;
        } else if(nums[i] < nums[i - 1]) {
            decr = inc + 1;
        }
    }

    return max(inc , decr);
}

//TC :- O(n) cz it traverse arr at once........
//SC :- O(1)

