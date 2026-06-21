#include<bits/stdc++.h>
using namespace std;


int mostFrequesnt(int n,vector<int>&nums) {
    unordered_map<int,int>freq;
    
    int maxCount = 0;
    int ans = nums[0];

    for(auto num : nums) {
        freq[num]++;
        
        if(freq[num] > maxCount) {
            maxCount = freq[num];
            ans = num;
        }
    }

    return ans;

}


//here used hashmap instead of array because array can't hold 10^9 large kind of values so hashmap is bestest and fast and O(1) lookup for all
//create freq of num with maxCount if it greater than it should consider as a it is bigger value




