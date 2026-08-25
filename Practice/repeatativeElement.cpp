#include<bits/stdc++.h>
using namespace std;

int RepetativeElement(vector<int>&arr1)
{
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}

//unordered_map
unordered_map<int,int>mp;
for(int i = 0; i < n; i++) {
    mp[arr[i]]++;
}

for(int k : mp) {
    if(k.second == 2) {
        return k.first;
    }
}

return -1;

//sorting
sort()
for(int i=0;i<n;i++) {
    if(arr[i] == arr[i + 1]) {
        return arr[i];
    }
}

//sum diff only works if appear twice if thrice doesn't work..

int n = arr.size();
int sum1 = n * (n + 1) / 2;
int given = 0;

for(int k : arr) {
    given += arr[i];
}

return int(given - sum1);
