#include <bits/stdc++.h>
using namespace std;

vector<int>NetworkSignalMonitoringDP(vector<int>&signal, int k)
{
    int n = signal.size();
    vector<int>res;
    deque<int>dq;

  for(int i = 0; i < k; i++) {
     while(!dq.empty() && signal[i] >= signal[dp.back()]) {
        dp.pop_back();
     }
      dp.push_back(i);
  }

  res.push_back(signal[dq.front()]);
  for(int i = k; i < n; i++) {
    if(dq.front() == i-k) {
        dq.pop_back();
    }

    while(!dq.empty() && signal[i] >= signal[dq.back()]) {
        dp.pop_back();
    }
     dq.push_back(i);
     res.push_back(signal[dq.front()]);
  }

  return res;
}

//O(n)
//O(k)
