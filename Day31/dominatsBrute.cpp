#include<bits/stdc++.h>
using namespace std;


vector<int>DominatsUsingBrute(vector<int>arr)
{
    int n = arr.size();
    vector<int>dominants;

    for(int i = 0; i < n; i++) {
        bool is_dominant = true;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                is_dominant = false;
                break;
            }
        }

        if(is_dominant) dominants.push_back(arr[i]);
    }

    return dominants;
}

//TC :- O(n^2)
//SC :- O(n)

