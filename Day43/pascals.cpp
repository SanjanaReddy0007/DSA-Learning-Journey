#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>PascalsTrianlge(int n)
{
    if(n == 0) return {{1}};
    if(n == 1) return {{1},{1,1}};

    vector<int>ans = {{1,},{1,1}};
    vector<int>prev(1,1);

    for(int i = 3; i <= n; i++) {
        vector<int>cur(i);
        int cur[0] = 1;
        int cur[i - 1] = 1;
        for(int j = 1; j < i-1; j++) {
            cur[i] = prev[j] + prev[ j - 1];
        }

        ans.push_back(cur);
        prev = cur;
    }

    return ans;
}

//O(n^2) O(n^2/O(1))



