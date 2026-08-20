#include<bits/stdc++.h>
using namespace std;

string lexiographicalSplitOptimal(string RibbonText, int groupCount)
{
    int n = RibbonText.size();
    int i = 0, j = 1, k = 0;
    
    while(i + k < m && j + k < m) {
        if(RibbonText[i + k] == RibbonText[j + k]) {
            k++;
        } else if(RibbonText[i + k] < RibbonText[j + k]) {
            i = i + k + 1;
            if(i <= j) i = j + 1;
            k = 0;
        } else {
            j = j + k + 1;
            if(j <= i) j = i + 1;
            k = 0;
        }

        if(i == j) j++;
        if(i >= n || j >= n) break;
    }

    int start = 0;
    if(i >= n) start = j;
    else if(j >= n) start = i;
    else start = min(i,j);
    return RibbonText.substr(start, min(limit, n - start));
}

//O(n)
//O(1)
