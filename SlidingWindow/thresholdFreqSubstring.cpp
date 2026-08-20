#include<bits/stdc++.h>
using namespace std;


long long thresholFreqSubstring(vector<int>&recordings, int threshold)
{
    int n = recordings.size();
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        vector<int>freq(26,0);
        for(int j = i; j < n; j++) {
            freq[recordings[j] - 'a']++;
            if(isPossible(freq,threshold)) {
                ans++;
            }
        }

        return ans;
    }

    bool isPossible(vector<int>&freq,int k) {
        for(int i = 0; i < 26; i++) {
            if(freq[i] >= k) return true;
        }

        return false;
    }
}

//O(n^26)
//O(26)
