#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSumBrute(vector<int>& arr)
{
  int n = arr.size();
  vector<vector<int>>ans;
  set<vector<int>>s;

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        for(int k = j + 1; k < n; k++) {
            if(arr[i] + arr[j] + arr[k] == 0) {
                vector<int>temp={arr[i],arr[j],arr[k]};
                sort(temp.begin(),temp.end());
                s.insert(temp);
            }
        }
    }
  }

  for(auto x : s) ans.push_back(x);
  return ans;
}

//O(n^3 log #triplets)
//O(2 * triplets)
