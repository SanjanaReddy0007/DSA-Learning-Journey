#include<bits/stdc++.h>
using namespace std;

//using 2 pointer approach

vector<vector<int>> FourSumOptimal(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<vector<int>>ans;
    sort(arr.begin() , arr.end());
    
    for(int i = 0; i < n; i++) {
        if(i > 0 && arr[i] == arr[i - 1]) continue;
        
        for(int j = i + 1; j < n; j++) {

            if(j  > i + 1 && arr[j] == arr[j - 1]) continue;

            int left = j + 1;
            int right = n - 1;

            while(left < right) {
                if(left > j + 1 && arr[left] == arr[left - 1]) {
                    left++;
                    contine;
                }

             long long sum = arr[left];
               sum +=  arr[right] ;
             long long s = target;
             s -= arr[i] ;
             s -= arr[j];

             if(sum == s) {
                vector<int>temp = {arr[i],arr[j],arr[left],arr[right]};
                ans.push_back(temp);
                left++;
                right--;
             } else if(sum < x) {
                left++;
             } else {
                right--;
             }

            }
        }
    }

    return ans;
}


//TC :- O(n^3)
//SC :- 
