#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>fourSumBrute(vector<int>&arr, int target)
{
  int n = arr.size();
  set<vector<int>> S;

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        for(int k = j + 1; k < n; k++) {
            for(int l = k + 1; l < n; l++) {
                long long Sum += arr[i];
                Sum += arr[j];
                Sum += arr[k];
                Sum += arr[l];
                if(sum == target) {
                    vector<int>temp = {arr[i],arr[j],arr[k],arr[l]};
                    sort(temp.begin() , temp.end());
                    S.insert(temp);
                }
            }
        }
    }
  }

  vector<vector<int>> ans(S.begin() , S.end());
  return ans;
}


//O(n^4 * (#quadrets))
//O(#guadrets)

