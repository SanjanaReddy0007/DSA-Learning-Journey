#include <bits/stdc++.h>
using namespace std;

//O(n^2) SC :- O(1)

bool search(vector<int>&arr, int next) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] == next) {
            return true;
        }
    }

    return false;
}


int longestSubsequence(vector<int>& arr)
{
    int n = arr.size();
    int next = 0;

    for(int i = 0; i < n; i++) {
       int count = 1;
       int next = arr[i] + 1;

       while(search(arr,next)) {
          count++;
          next++;
       }

       ans = max(ans,count);
    }

    return ans;
}


//Better O(nlogn) O(1)
int n = arr.size();
sort(arr.begin(),arr.end());

for(int i = 0; i < n; i++) {
    if(arr[i] - arr[i - 1] == 1) {
        count++;
        ans = max(ans,count);
    } else if(arr[i] == arr[i - 1]) {
       continue;
    } else {
        count = 1;
    }
}

return count;




