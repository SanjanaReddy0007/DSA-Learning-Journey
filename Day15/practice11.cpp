#include<bits/stdc++.h>
using namespace std;


int findMaximumPairs(int threshold, vector<int>&weights) {
    int n = weights.size();
    
    sort(weights.begin(), weights.end());
    int left = 0, right = n - 1;
    int ans = INT_MIN;
    int sum = 0;

    while(left < right) {
        sum = weights[left] + weights[right];

        if(sum < threshold) {
           ans = max(ans, sum);
           left++;
        }else{
            right--;
        }
    }

    return ans;


}



//O(nlogn)
//SC:- O(1)

