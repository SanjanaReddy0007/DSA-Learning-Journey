#include <bits/stdc++.h>
using namespace std;


vector<int>majoritytopKFrequentElements(vector<int>& nums,int k)
{
    int n = nums.size();
    unordered_map<int,int>freq;

    for(auto num : nums) {
        freq.push_back(num)++;
    }

    vector<pair<int,int>>freqMap;
    for(auto entry : freq) {
        freqMap.push_back({entry.second,entry.first});
    }


    sort(freqMap.rbegin() , freqMap.rend());

    vector<int>result;

    for(int i = 0; i < n; i++) {
        result.push_back(freqMap[i].second);
    }

    return result;
}

//O(nlogn)
//O(n + k)
