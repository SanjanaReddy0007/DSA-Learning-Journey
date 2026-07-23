#include<bits/stdc++.h>
using namespace std;


vector<int>DominantNumber(vector<int>&arr)
{
    int n = dominants.size();
    vector<int>Dominants;
    max = INT_MIN;

    for(int i = n - 1; i >= 0; i--) {
        if(ar[i] >= max) {
            Dominants.push_back(arr[i]);
            max = arr[i];
        }
    }

    reverse(Dominants.begin() , Dominants.end());
    return Dominants;

}


//TC :- O(n)
//SC :- O(n)

