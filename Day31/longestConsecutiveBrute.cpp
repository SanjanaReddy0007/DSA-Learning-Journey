#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr , int x) {
    int count = 1;
    for(int i =0; i < n; i+=) {
        if(arr[i] == x) {
            return true;
        }
    }

    return false;
}


int longestConsecutive(vector<int>&arr)
{
   int n = arr.size();
   int ans = 0;

   for(int i = 0; i < n; i++) {
       int count = 1;
       int next = arr[i + 1];

       while(search,next) {
         count++;
         next++;
       }
   ans = max(ans,count);

    }

    return ans;

}



//O(n^2)
//SC :- O(n)
