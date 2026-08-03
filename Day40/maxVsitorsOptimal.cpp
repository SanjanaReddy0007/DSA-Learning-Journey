#include <bits/stdc++.h>
using namespace std;

int kioskMaxVisitor(vector<int>& records) {
    int n = records.size();
    int ans = 0;
    unordered_map<int, unordered_set<int>> kioskVisitors;

    for(int i = 0; i < n; i++) {
        int kioskId = records[i][1];
        int visitorsId = records[i][0];
        kioskVisitors[kioskId].insert(visitorsId);
        ans = max(ans, (int)kioskVisitors.size());
    }

    return ans;
}


//TC :- O(n)
//SC :- O(n)
