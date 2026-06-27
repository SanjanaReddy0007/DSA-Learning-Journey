#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>prioritizeBroadcasts(vector<vector<int>> & records) {
     sort(records.begin(), records.end(), [](vector<int>&a , vector<int>&b) {
        int score1 = 2LL*a[1] + a[2];
        int score2 = 2LL*[b1] + b[2];
       
        if(score1 != score2) {
            return score1 > score2;
        }

        return a[0] < a[1];

     })

     return records;
}


//O(nlogn) by using comparator operator it minimizes tc
//SC:- O(n) depend on sorting algo internally





