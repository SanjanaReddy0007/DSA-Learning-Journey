#include<bits/stdc++.h>
using namespace std;

int help(vector<int>&arr, int k) {
    int n = arr.size();
    int ans = 0;
    int i = 0, j = 0;
    unordered_map<int,int>m;

    while(j < n) {
        m[arr[j]] ++;
        while(m.size() == k) {
            ans += n - j;
            m[arr[i]] -= 1;
            if(m.size() == 0) {
                m.erase();
            }
            i++;
        }

        j++;
    }

    return ans;

}

int countSubarrWithdistinctK(vector<int>&arr, int k)
{
    return help(arr,k) - help(arr,k+1);
}


//O(n)
//O(1)