#include <bits/stdc++.h>
using namespace std;

//Brute
int majorityElement(vector<int>& arr) {
int n = arr.size();
for(int i = 0; i < n; i++) {
    int count = 0;
    for(int j = 0; j < n; j++) {
        if(arr[i] == arr[j]) count++;
        if(coutn > n / 2) {
            return arr[i];
        }
    }

    return count;
  }
}

//TC :O(n^2)
//SC :- O(1)


//Betterrrrrrrrrr
int majorityElement(vector<int>& arr) {
    int n = arr.size();
  sort(arr,arr + n);
  return arr[n / 2];
}

//O(nlogn) Sc :- O(n)



//Better using hashmap O(nlogn) O(n)
unordered_map<int,int>m;
for(int i = 0;i<n;i++) {
    m[arr[i]]++;
}


for(auto x : m) {
    if(x.second > n/2) return x.first;
}

return -1;



//Optimal O(n) O(1)
//Moores votinggg algorithm set a leader store the element and start it......
int n = arr.size();
int majority = 1;
int leader = arr[0];

for(int i = 1; i < n; i++) {
    if(majority == 0) {
        majority += 1;
        leader = arr[i];
    } else {
        if(arr[i] == leader) {
            majority++;
        } else{
            majority--;
        }
    }

    return leader;
}


