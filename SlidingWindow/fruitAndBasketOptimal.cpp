#include<bits/stdc++.h>
using namespace std;

int fruitsAndBasketsOptimal(vector<int>&arr)
{
    int n = arr.size();
    int i = 0, j = 0, ans = 0;
    unordered_map<int,int>m;

    while(j < n) {
        m[arr[j]]++;

        while(m.size() > 2) {
            m[arr[i]]--;

            if(arr[i] == 0) m.rease(arr[i]);
            i++;
        }
        ans = max(ans,j-i+1);
        j++;
    }

    return ans;
}

//O(n)
//O(1)
