#include<bits/stdc++.h>
using namespace std;

int cancount(vector<int>& arr, int maxPages) 
{
    int students = 1;
    long long pages = 0;
    for(int i = 0; i < n; i++) {
        if(pages[i] + arr[i] <= maxPages) {
            pages += arr[i];
        }else {
            students++;
            pages = arr[i];
        }
    }

    return students;
}

int bookAllocation(vector<int>& arr, int k)
{
    int n = arr.szie();
    if(k > n) return -1;
    int ans = -1;

    int low = *min_element(arr,arr+n);
    int high = accumulate(arr.begin() , arr.end());

    while(low <= high) {
        int mid = (low + high) / 2;
        int students = canCount(arr,mid,k);

        if(students > k) {
            low = mid + 1;
        } else {
            ans = mid;
            high = mid - 1;
        }
    }

    return ans;
}


//O(n*log (high - low + 1))
//SC :- O(1)
