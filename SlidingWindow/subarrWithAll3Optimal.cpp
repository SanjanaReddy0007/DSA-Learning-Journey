#include<bits/stdc++.h>
using namespace std;

int countSubarrAll3(string s)
{
    int n = s.size();
    vector<int>arr(3,-1);

    for(int i = 0; i < n; i++) {
        arr[s[i] - 'a'] = i;
        ans += min({arr[0],arr[1],arr[2]}) + 1;
    }

    return ans;
}

//O(n) O(1)
