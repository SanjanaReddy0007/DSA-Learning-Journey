include<bits/stdc++.h>
using namespace std;


int largestsubarr(vector<int>& nums)
{
    int n = nums.size();
    int maxlenght = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == 0) {
                maxlength = max(maxlength, j - i + 1);
            }
        }
    }

    return maxlength;
}

//O(n^2)
//SC :- O(1)

