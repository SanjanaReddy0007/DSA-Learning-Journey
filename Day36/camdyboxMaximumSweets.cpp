#include<bits/stdc++.h>
using namespace std;

int canDyMaximumsubarrtoK(int maxi,vector<int>& nums)
{
    int n = nums.size();
    if(maxi <= 1) return 0;
    long long count = 0;
    long long product = 1;
    int start = 0;

    for(int end = 0; end < n; end++) {
           product *= nums[end];


           while(product >= maxi) {
              product /= nums[start];
              start++;
           }

           count += end - stsrt + 1;
    }

    return count;
}

//TC :- O(n)
//O(n)


