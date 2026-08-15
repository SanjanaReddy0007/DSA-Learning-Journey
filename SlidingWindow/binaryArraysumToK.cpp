#include<bits/stdc++.h>
using namespace std;


int binaryArraySumtoK(vector<int>&arr, int k)
{
    if(k < 0) return 0;

    int n = arr.size();
    int i = 0, j = 0, ans = 0, sum  = 0;

    while(j < n) {
        sum += arr[j];

        while(sum > k) {
            sum -= arr[i];
            i++;
        }

        ans += j - i + 1;
        j++;
    }

    return ans;

}


int sumtoK(vector<int>&arr, int k)
{
    return binaryArraySumtoK(arr,k) - binaryArraySumToK(arr,  k - 1);
}


//O(n)
//SC :- O(1)



