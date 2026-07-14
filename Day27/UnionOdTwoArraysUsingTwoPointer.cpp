#include<bits/stdc++.h>
using namespace std;

//ONLY WORKS WHEN THE ARRAY IS SORTE BOTHHHHHH BCS IT COMPARES BACK ELEMENT SO
//tc :- o(M + N) TWO POINTER MERGING
//sc :- o(M + N)

vector<int>getUnion(vector<int>&arr1,vector<int>&arr2) {
    int i = 0, j = 0;
    vector<int>ans;

   while(i < arr1.size() && j < arr2.size()) {
     if(arr1[i] <= arr2[j]) {
        if(ans.empty() || arr1[i] != ans.back()) {
            ans.push_back(arr1[i]);
        }
      i++;
     } else {
        if(ans.empty() || arr2[j] != ans.back()) {
            ans.push_back(arr2[j]);
        }
       j++;
     }
   }

   while(j < arr2.size()) {
     if(ans.empty() || arr2[j] != ans.back()) {
        ans.push_back(arr2[j]);
     }
     j++;
   }

   while(i < arr1.size()) {
     if(ans.empty() || arr1[i] != ans.back()) {
        ans.push_back(arr1[i]);
     }
     i++;
   }
   return ans;
}



int main() {
    int n,m;
    cin>>n>>m;
    vactor<int>arr1(n),arr2(m);
    for(int i = 0; i < n; i++) 
       cin>>arr1[i];
    for(int i = 0; i < m; i++) 
       cin>>arr2[i];
    vector<int>ans = getUnion(arr1,arr2);
    for(auto num : ans) {
        cout<<num<<" ";
    }
    return 0;
}


