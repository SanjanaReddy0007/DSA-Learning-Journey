#include<bits/stdc++.h>
using namespace std;

int countGoodSubarrays(vector<int>&arr, int k)
{
    int n = arr.size();
    int ans = 0;
    int oddCounts = 0;
    int validCounts = 0;
    int left = 0;

    for(int right = 0; right < n; right++) {
        if(arr[right] % 2 == 1) {
            oddCounts++;
            validCounts = 0;
        }

        while(oddCounts == k) {
            validCounts++;

            if(arr[left] % 2 == 1) {
                oddCounts--;
            }
          left++;
        }

        ans += validCounts;
    }
    

    return validCounts;

}


//O(n)
//O(1)




