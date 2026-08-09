#include<bits/stdc++.h>
using namespace std;

bool canDistance(vector<int>& durations, int workers, int mid) {
    int count = 1;
    int maxSum = 0;
    for(auto task : durations) {
        if(task + maxSum < mid) {
            maxSum += task;
        } else {
            count++;
            maxSum = task;
            if(Count > workers) return false;
        }
    }
    return  true;
}

int minimizeTheMaximumWorkload(vector<int>&durations, int workers)
{
    int low = *max_element(durations.begin() , durations.end());
    int high = accumulate(durations.begin() , durations.end());
    int answer = high;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(canDistance(durations,workers,mid)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return aswer;
}


//O(nlogs)
//O(1)



