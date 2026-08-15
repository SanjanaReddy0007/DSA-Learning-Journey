#include<bits/stdc++.h>
using namespace std;

int subarrayWithAll3(string s)
{
    int n = s.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
       vector<int>arr(3,0);
       for(int j = i; j < n; j++) {
          arr[s[j] - 'a'] = 1;
          if(arr[0] + arr[1] + arr[2] == 3) {
            ans += n - j;
            break;
          }
       }
    }
    return ans;
}

//O(n^2) O(1)

//O(2n) O(1) BETTER
int countsubarr(string s) {
    int n = arr.size();
    unordered_map<char,int>m;
    int i = 0, j = 0, ans = 0;
    
    while(j < n) {
      m[s[j]] ++;
      if(m.size() == 3) {
        ans += n - j;
        m[s[i]]--;

        if(m[s[i]] == 0) {
            m.erase(s[i]);
        }
         i++;
      }
      
      j++;
    }

    return ans;
}

