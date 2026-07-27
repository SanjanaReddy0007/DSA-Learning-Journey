#include<bits/stdc++.h>
using namespace std;


vector<vecot<int>>fourSumBrute(vector<int>& arr , int target)
{
    int n = arr.size();
    set<vector<int>>s;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                for(int l = k + 1; l < n; l++) {
                    long long sum = arr[i];
                    sum += arr[j];
                    sum += arr[k];
                    sum += arr[l];

                    if(sum == target) {
                        vector<int>temp = {arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin() , temp.end());
                        s.insert(temp);
                    } 
                }
            }
        }
    }

    vector<vector<int>>ans(s.begin() , s.end());
    return ans;
}


//TC :- O(n^4 * logn)
//SC :- O(2 * A)
