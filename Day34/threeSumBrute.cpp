#include<bits/stdc++.h>
using namespace std;

//three sum i.e sum of three should be equals to ZEROOOOOO 
//TC :- O(n^3 log(triplets)) sort set and all
//SC :- O(2 * triplets)

vector<vector<int>>ThreeSumBrute(vector<int>&arr)
{
    int n = arr.size();
    vector<vector<int>>ans;
    set<vector<int>>s;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                   vector<int>temp = {arr[i],arr[j],arr[k]};
                   sort(temp.begin() , temp.end());
                   s.insert(temp);
                }
            }
        }
    }

    for(auto x : s) {
       ans.insert(x);
    }

    return ans;

}


