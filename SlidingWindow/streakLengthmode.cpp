#include<bits/stdc++.h>
using namespace std;

//O(n^2)  
//O(k)

int maximizeStreaksForm(string s)
{
    int n = s.size();
    vector<int>range;
    int i = 0, ans = 0;

    while(i<n) {
        int j = i;
        while(j < n && s[j] == s[i]){
            j++;
        }
        
        range.push_back(j - i);
        i = j;
    }

    for(int i = 0; i < range.size(); i++) {
        int count = 0;
        for(int j = 0; j < range.size(); j++) {
            if(s[j] == s[i]) {
                count++;
            }
        }
        ans = max(ans, count);
    }

    return ans;
}

