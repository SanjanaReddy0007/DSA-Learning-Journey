#include<bits/stdc++.h>
using namespace std;

//BRUTEEEEE O(n^2) O(k)

int subarrWithDistinctK(vector<int>&arr, int k)
{
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        unordered_map<int,int>m;
        for(int j = i; j < n; j++) {
            m[arr[j]]++;
            if(m.size() == k) {
                count ++;
            } else if(m.size() > k) {
                break;
            }
        }
    }

    return count;

}

