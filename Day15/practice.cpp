#include<bits/stdc++.h>
using namespace std;


int minSwaps(vector<int>&arr) {
    int n = arr.size();
    
    vector<int>sortedarr = arr;

    unordered_map<int,int>position;
    sort(sortedarr.begin(),sortedarr.end());
    for(int i=0;i<n;i++) {
       position[sortedarr[i]] = i;
    }

    int i = 0;
    int swaps = 0;
    while(i<n) {
        if(position[arr[i]] == i) {
            i++;
        }else{
            int currentIndex = position[arr[i]];
            swap(arr[i],arr[currentIndex]);
            swap++;
        }
    }

}






