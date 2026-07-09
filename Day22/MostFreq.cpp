#include<bits/stdc++.h>
using namespace std;


int mostFrequentNumber(int n,vector<int>&nums) {
   unordered_map<int,int>freq;
   int maxFreq = 0;
   int ans = nums[0];

   for(int num : nums) {
    freq[num]++;

    if(freq[num] > maxFreq) {
        maxFreq = freq[num];
        ans = num;
    }
     
   return ans;
     
   }
}

//TC :- O(n) for freq of the num traverse arrayyy traverse and passsss
//SC :- O(n) require few space extra for the compare best few required to compare current ans and best ans......
