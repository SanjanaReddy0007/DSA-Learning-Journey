#include <bits/stdc++.h>
using namespace std;

vector<int>MajorityByThree(vector<int>& arr)
{
    int n = arr.size();
    unordered_set<int>ans;
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) count++;
            if(count > n / 3) ans.push_back(arr[i]);
        }
    }

    return ans;
}

//O(n^2) Sc :- O(1)
