#include<bits/stdc++.h>
using namespace std;

int countValidSegments(string s)
{
    int n = s.size();
    int ans = 0;
    int start = 0;
    vector<int>freq(26,0);

    for(int i = 0; i < n; i++) {
       freq[s[i] - 'a']++;

       while(freq[s[i] - 'a'] > 1) {
            freq[s[start] - 'a']--;
            start++;
       }
       ans += (i - start + 1);
    }
    return ans;
}

//O(n)
//O(1)