#include<bits/stdc++.h>
using namespace std;


int minimumProximitySum(vector<int>&values) {
       int n = values.size();

       sort(values.begin() , values.end());
       int sum = 0;
       sum += values[1] - values[0];
       sum += values[n - 2] - values[n - 1];

    for(int i = 1; i < n - 1; i++) {
        int leftDiff = values[i] - values[i - 1];
        int rightDiff = values[i + 1] - values[i];

        sum += min(leftDiff , rightDiff);
    }

    return sum;

}


//TC :- O(nlogn)
//SC :- O(1)

