#include<bits/stdc++.h>
using namespace std;


int largestsubaarrywithsumZERO(vector<int>& nums)
{
    int sum = 0;
    int n = nums.size();
    int maxlength = 0;
    unordered_map<int,int> findsum;

    for(int i = 0; i < n; i++) {
        sum += nums[i];


        if(sum == 0) {
            maxlength = i + 1;
        }


        if(findsum.find(sum) != findsum.end()) {
            maxlength = max(maxlength, i - findsum[sum]);
        } else {
            findsum[sum] = i;
        }
    }

    return maxlength;
}

//TC :- O(n)
//SC :- O(n)

