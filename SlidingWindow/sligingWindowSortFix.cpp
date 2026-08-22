#include<bits/stdc++.h>
using namespace std;

vector<int>slidingWindowSortFix(vector<int>&values, int window)
{
    int n = values.size();
    vector<int>ans;
    
    for(int i = 0; i <= n - window; i++) {
        vector<int>cur(values.begin()+i, values.begin()+i+window);
        vector<int>Sortedcur = cur;
        sort(sortedcur.begin() , sortedcur.end());
        
        int left = 0;
        while(left < window && sortedcur[left] == cur[left]) {
            left++;
        }

        if(left == window) {
            ans.push_back(0);
            continue;
        }

        int right = window - 1;
        while(right >= 0 && cur[right] == sortedcur[right]) {
            right--;
        }

        ans.push_back(right - left + 1);
    }

    return ans;

}

//O(n(window - 1) *window log window)
//O(window)


  