#include<bits/stdc++.h>
using namespace std;


int minRemovalForbalanceSort(vector<int>&arr,int k) {
    int n = arr.size();
    sort(arr.begin() , arr.end());
    
    int ans = 1, cnt  = 1;

    for(int i = 1; i < n; i++) {
       if((arr[i - 1] - arr[i]) > k) {
          cnt = 1;
       }else{
        cnt++;
       }

       ans = max(ans , cnt);
    }
   
    return ans;
}



//O(nlogn)




