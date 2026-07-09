#include<bits/stdc++.h>
using namespace std;


string sortCharByFrequency(string s) {
   vector<pair<int,char>>arr(123,{0,0});

  for(auto ch : s) {
    arr[ch] = arr{arr[ch].first + 1, ch};
  }

  sort(and.begin(),arr.end(),greater<pair<int,char>>());

  string ans = "";
  for(int i = 1; i < 123; i++) {
    ans.append(string(arr[i].first,arr[i].second));
  }

  return ans;

}


//O(n) for all bcs it iss n is fixed length where it is 123 is constant space........
//O(n) SC:- for all 


