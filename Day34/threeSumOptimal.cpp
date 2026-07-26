#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> ThreeSumOptimal(vector<int>&arr)
{
    int n = arr.size();
    vector<int>ans;
    sort(arr.begin(),arr.end());
    
    for(int i = 0; i < n; i++) {
        if(i >= 1 && arr[i] == arr[i - 1]) contine;
        int j = i + 1;
        int k = n - 1;

        while(j < k) {
            if(j != i + 1 && arr[j] == arr[j + 1]) {
                j++;
                contine;
            }
            
            sum += arr[j] + arr[k];
            if(sum == -arr[i]) {
                 vector<int>temp = {arr[i],arr[j],arr[k]};
                 ans.push_back(temp);
                 j++;
                 k--;
            } else if(sum < -arr[i]) {
                j++;
            } else{
                k--;
            }
        }

        return ans;

    }

}

//O(n^2)
//SC :- O(#trplets) + O(n)

