#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int>&arr)
{
    int n = arr.size();
    int longest = 0;
    for(int left = 0; left < n; left++) {
        int zeroes = 0;
        for(int right = left; right < n; right++) {
            if(arr[right] == 0) {
                zeroes++;
            }

            if(zeroes <= 1) longest = max(longest, right - left + 1);
            else break;
        }
    }

    return longest;
}

//O(n^2)
//O(1)
