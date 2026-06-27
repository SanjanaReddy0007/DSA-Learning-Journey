#include<bits.stdc++.h>
using namespace std;


vector<string>reorderParticipants(vector<string>&participants, vector<int>& scores) {
    int n = participants.size();
    
    vector<pair<int,string>>arr;
    for(int i = 0; i < n; i++) {
        arr.push_back({participants[i] , scores[i]});
    }

    stable_sort(arr.begin() , arr.end() , [](pair<int,string>a, pair<int ,string>b) {
        return a.first > b.first;
    })

    vector<istring>ans;
    for(auto x : arr) {
        ans.push_back(x.second);
    }

    return ans; 

}


//TC :- O(nlogn)
//SC :- O(1)
