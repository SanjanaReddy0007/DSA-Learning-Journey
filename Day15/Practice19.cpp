#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>CoastalPriority (vector<vector<int>>& records) {
    int n = records.size();
    sor(records.begin(),records.end(),[](vector<int>&a,vector<int>&b) {
        long long scoreA = 2LL*a[1] + a[2];
        long long scoreB = 2LL*b[1] + b[2];

        if(scoreA != scoreB) return scoreA > scoreB;
         return a[0] < b[0];
    })

    return records;

}



