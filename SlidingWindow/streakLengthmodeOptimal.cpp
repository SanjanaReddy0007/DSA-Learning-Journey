#include<bits/stdc++.h>
using namespace std;

//O(n) O(n)

int streakLengthMode(sting s)
{
    int n = s.size();
    int i = 0;
    int ans = 0;
    vector<int>freq(n + 1, 0);

  while(i < n) {
    int j = i;
    while(j < n && s[j] == s[i]){
        j++;
    }

    int length = j - i;
    freq[length]++;

    ans = max(ans , freq[length]);
    i = j;
  }

  return ans;
}


