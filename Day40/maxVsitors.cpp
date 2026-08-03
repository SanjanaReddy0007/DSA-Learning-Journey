#include <bits/stdc++.h>
using namespace std;


in thihestVisitors(vector<int>& records) {
    int n = records.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int kiosk = records[i][0];
        unordered_set<int>kioskSet;
        for(int j = 0; j < n; j++) {
            if(kiosk == records[j][1]) {
                kioskSet.insert(records[j][0]);
            }
        }
       
       ans = max(ans, (int)kioskSet.size()); 
    }

    return ans;
}


//TC :- O(n^2)
//O(n)

