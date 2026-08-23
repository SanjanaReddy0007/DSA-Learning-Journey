#include<bits/stdc++.h>
using namespace std;

long long thresoldFreq(vector<int>&recorings, int threshold)
{
    int n = recordings.size();
    long long ans = 0;
    int start = 0;
    vector,int>freq(26,0);

    for(int i = 0; i < n; i++) {
        freq[recordings[i] - 'a']++;
        while(isPossible(freq,threshold)) {
            freq[recordings[start] - 'a']--;
            start++;
            ans += (n - i);
        }
    }
    return ans;
}


bool isPossible(vector<int>& freq, int k) {
    for(int i = 0; i < 26; i++) {
        if(freq[i] >= k) return true;
    }

    return false;
}


//O(n)
//O(26)


