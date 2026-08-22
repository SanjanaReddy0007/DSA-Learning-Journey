#include<bits/stdc++.h>
using namespace std;

int limitComplianceCount(vector<vector<int>>&req, int k, int window)
{
    int n = req.size();
    unordered_map<int,int>freq;

    for(auto& s : req) {
        int user = s[0];
        int time = s[1];
        freq[user].push_back(time);
    }

    for(auto& p : freq) {
        int timers = p.second;
        sort(timers.begin() , timers.end());
        deque<int>dq;

        for(auto x:timers) {
            dq.push_back(x);
            if(dq.size() > k) {
                if(dq.back() - dq.front() <= window) {
                     dq.pop_back();
                     n--;
                } else {
                   dq.pop_front();
                }
            }
        }
    }

    return n;

}



