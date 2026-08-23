#include<bits/stdc++.h>
using namespace std;

//O(n^2)
int uniqVisitorsSegmentsss(string sessionLog)
{
    int n = sessionLog.size();
    long long ans = 0;

    for(int i = 0; i < n; i++) {
       vector<int>freq(26,0);
       for(int j = i; j < n; j++) {
          freq[sessionLog[j] - 'a']++;
          if(freq[sessionLog] - 'a' > 1) break;
          ans++;
       }
    }

    return ans;
}



//O(n)
int uniqVisitorsSegmentsss(string sessionLog)
{
    int n = sessionLog.size();
    long long ans = 0;
     vector<int>freq(26,0);

     for(int i = 0; i < n; i++) {
        freq[sessionLog[i] - 'a']++;
        while(freq[sessionLog[i] - 'a'] > 1) {
            freq[sessionLog[start] - 'a']--;
            start++;
        }
        ans += (start - i + 1);
     }

     return ans;
}


