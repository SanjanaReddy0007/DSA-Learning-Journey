#include <bits/stdc++.h>
using namespace std;


vector<int>Dominats(vector<int>& arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    vector<int>dominants;

    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] > maxi) {
             dominants.push_back(arr[i]);
             maxi = arr[i];
        }
    }

    reverse(dominants.begin() , dominants.end());
   return dominants;
}

//O(n) SC :- O(n)

