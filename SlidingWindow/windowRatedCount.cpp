#include<bits/stdc++.h>
using namespace std;

int windowratedCounts(vector<vector<int>>&requests, int k, int window)
{
    int n = requests.size();
    unordered_map<int, vector<int>>mp;

    for(auto&it : requests) {
        int user = it.first;
        int time = it.second;
        mp[user].push_back(time);
    }

    for(auto x : mp) {
        int times = x.second;
        sort(times.begin() , times.end());

        deque<int>q;
        for(auto m : times) {
            q.push_back(m);

            if(q.size() > k) {
                if(q.back() - q.front() <= window ) {
                    q.pop_back();
                    n--;
                } else {
                    q.pop_front();
                }
            }
        }
    }

    return n;
}

//O(nlogn)
//O(n)
