#include<bits/stdc++.h>
using namespace std;


vector<string>reoderParticipants(vector<string>&participants, vector<int>& scores) {
    int n = participants.size();
    unordered_map<string,int> mp;
    
    for(int i=0;i<n-1;i++) {
         mp[scores[i]] =  participants[i];
    }

    sort(scores.begin() , scores.end(),greater<int>());
    for(int i = 0; i < n - 1; i++) {
           participants[i] = mp[scores[i]];
    }

    return participants;

}
