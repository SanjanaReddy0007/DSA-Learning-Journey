#include<bits/stdc++.h>
using namespace std;

vector<int>topFrequentK(vecctor<int> &arr, int k)
{
    unordered_map<int,int>freqMap;

    for(auto num : arr) {
        freqMap[num]++;
    }

    priority_queue<pair<int,int>,pair<<int,int>>,greater<pair<int,int>>>pq;

    for(auto &entry : freqMap) {
        pq.push_back({entry.second, entry.first});
        if(pq.size() > k) pq.pop();
    }

    vector<int>result;
    while(!pq.empty())
    {
       result.push_back(pq.top().second);
       pq.pop();
    }

    return result;
}


//TC :- O(nlogk)
//SC :- O(n + k)
