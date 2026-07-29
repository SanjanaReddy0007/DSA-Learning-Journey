#include<bits/stdc++.h>
using namespace std;


int maximumKoiskVisitors(vector<int>&records)
{
    int n = records.size();
    int answer = 0;
    unordered_map<int, unordered_set<int>> visitorsKoisk;

    for(int i = 0; i < n; i++) {
        int koiskId = records[i][1];
        int visitorsId = records[i][0];
        visitorsKoisk[koiskId].insert(visitorsId);
        answer = max(answer , (int)visitorsKoisk[koiskId].size());
    }

    return answer;
}

//O(n)
//O(1)
