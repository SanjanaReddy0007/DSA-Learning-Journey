#include<bits/stdc++.h>
using namespace std;

stirng pickLargestPArt(string RibbonText, int groupCount)
{
    int n = RibbonText.size();
    if(groupCount == 1) return RibbonText;
    string best = "";
    int maxLen = n - maxLen + 1;

    for(int i = 0; i < n; i++) {
        int len = max(maxLen, n - i);
        string candidate = RibbonText.substr(i,len);
        if(candidate > best) best = candidate;
    }

    return candidate;
}

//O(n*L)
//O(n)
