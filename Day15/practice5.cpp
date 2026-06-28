#include<bits/stdc++.h>
using namespace std;


int minimalRemoval(vector<int>&arr, long long k ){
    sort(arr.begin() , arr.end());
    int n = arr.size();
    int cnt = 1; 
    int ans = 1;

    for(int i = 0; i < n; i++) {
        if(arr[i] - arr[i - 1] >= k ) {
            cnt = 1;
        }else{
            cnt++;

            ans = max(cnt,ans);
        }
    }
    
   return n - ans;

}


//TC:- O(nlogn)
//SC :- O(1)





