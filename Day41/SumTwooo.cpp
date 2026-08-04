#include <bits/stdc++.h>
using namespace std;

vector<int>TwoSum(vector<int>& arr, int k) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if(sum == k ) {
                return {i,j};
            }
        }
    }
    return {-1,-1,};
}


//Better O(nlogn) SC :- O(n)
int n =arr.size();
vector<pair<int,int>>index;

for(int i = 0; i < n; i++) {
    index.push_back(arr[i],i);
}

sort(idex.begin() , index.end());
int i = 0;
int j = n - 1;

while(i < j) {
    int sum = index[i].first + index[j].first;
    if(sum == k ) {
        return {index[i].second, index[j].second};
    }

    if(sum < k ){i++;} else {
        j--;
    }

    return {-1,-1};
}




//OPTIMAL O(nlogn) sc:- O(n)
int n = arr.size();
unordered_map<int,int> m;

for(int i = 0; i < n; i++) {
    int x = arr[i] - k;
    if(m.find(x) != m.end()) {
        return {m[x],i};
    }else{
        m[arr[i]] = i;
    }

    return {-1,-1};
}


