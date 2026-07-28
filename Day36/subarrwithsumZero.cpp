#include<bits/stdc++.h>
using namespace std;


int largestSubarray(vector<int>& nums)
{
    int n = nums.size();
    int maxLength = 0;

    for(int i = 1; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];

            if(sum == 0) {
                maxLength = max(maxLength, j - i + 1);
            }

        }
    }

    return maxLength;
}

//O(n^2)
//O(1)
