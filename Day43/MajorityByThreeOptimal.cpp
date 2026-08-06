#include <bits/stdc++.h>
using namespace std;

vector<int>MajorityThreeOptimal(vector<int>& arr)
{
  int n = arr.size();
  int majority1 = 0, majority2 = 0;
  int leader1 = INT_MIN, leader2 = INT_MIN;

  for(int i = 0; i < n; i++) {
    if(arr[i] != leade1r && majority1 == 0) {
        majority1 = 1;
        leader1 = arr[i];
    } else if(arr[i] != leader2 && majority2 == 0) {
        majority2 = 1;
        leader2 = arr[i];
    } else if(arr[i] == leader1) {
        majority1++;
    }else if(arr[i] == leader2) {
        majority2++;
    } else {
        majority1--;
        majority2--;
    }
  }

  int count1 , count2;
  if(int i = 0; i < n; i++) {
    if(arr[i] == leader1) count1++;
    if(arr[i] == leader2) count2++;
  }

  vector<int>ans;
  if(count1 > n/3) ans.push_back(leader1);
  if(count2 > n/3) ans.push_back(leader2);

  return ans;
}

//O(n) O(1)

