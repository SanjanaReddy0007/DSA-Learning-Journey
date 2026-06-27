#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> prioritizeBroadcasts(vector<vector<int>>&records) {
    int n = records.size();
    for(int i =0; i <n; i++) {
        for(int j=0;j<n-1;j++) {
            long long score1 = 2LL*records[j][1] + records[j][2];
            long long score2 = 2LL*records[j+1][1] + records[j+1][2];
           
            if(score1 < score2 || score1 == score2 && records[j][0] > records[j][1]) {
                swap(records[j],records[j+1]);
            }

        }
    }

    return records;
}


//O(n^2) TC
//SC:- O(1)


