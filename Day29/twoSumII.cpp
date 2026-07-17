#include<bits/stdc++.h>
using namespace std;


vector<int>TwoSum(vector<int>&arr, int k)
{
    int n = arr.size();
    int left = 0, right = arr.size() - 1;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum == target) {
            return {left + 1, right + 1};
        } else if(left > target) {
            right --;
        } else {
            left++;
        }
    }

    return {-1,-1};

}



//TC :_ O(n)
//this is two sum using a aoutput is same as given +1 index using left right form.........

