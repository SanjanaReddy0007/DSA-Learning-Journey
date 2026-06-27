#include<bits/stdc++.h>
using namespace std;


int calculateProximitySum(vector<int>& values) {
    int n = values.size();
    sort(values.begin(),values.end());
    
    int sum = 0;
    sum += values[1] - values[0];
    sum += values[n - 1] - values[n - 2];

    for(int i = 1; i < n - 1; i++) {
        int leftDiff = values[i] - values[i - 1];
        int rightDiff = values[i + 1] - values[i];
        sum += min(rightDiff,leftDiff); 
    }

    return sum;

}




//TC:- O(nlong) for sorting it takes nlogn sorting of takes n times
//SC :- O(1) takes in place sorting no extra needed 







