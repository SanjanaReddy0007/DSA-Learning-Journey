#include<bits/stdc++.h>
using namespace std;

int cancount(vector<int>&arr, int mid)
{
    int painterss = 1;
    long long boardPainters = 0;
    for(int i = 0; i < n; i++) {
        if(boardPainters + arr[i] <= mid) {
            boardPainters += arr[i];
        } else {
            painters++;
            boardPainters = arr[i];
        }
    }

    return painters;
}

int paintersPartition(vector<int>&arr, int k)
{
    int n = arr.size();
    int low = *max_element(arr,arr+n);
    int high = accumulate(arr.begin() , arr.end());


while(low <= high) {
    int mid = (low + high) / 2;
    int painters = canCount(arr,mid);

    if(painters > k) {
        low = mid + 1;
    } else {
        high = mid - 1;
    }
}

return low;
}

//O(nlogs)
//O(1)
