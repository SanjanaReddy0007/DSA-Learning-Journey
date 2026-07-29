#include<bits/stdc++.h>
using namespace std;


int highestUniqueKoiskVistors(vector<vector<int>>& records)
{
    int n = records.size();
    int answer = 0;

    for(int i = 0; i < n; i++) {
        int koisks = records[i][1];
        unordered_set<int,int>visitors;

        for(int j = 0; j < n; j++) {
            if(records[j][0] == koisks) {
                visitors.insert(koisk[j][0]);
            }
        }

        answer = max(answer , visitors);
    }

    return answer;
}

//TC :- O(n^2)
//SC :- O(n)
