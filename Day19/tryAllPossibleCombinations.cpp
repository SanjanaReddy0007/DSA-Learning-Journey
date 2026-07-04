#include<bits/stdc++.h>
using namespace std;

class Solution{
     vector<vector<int>>output;

    void backtrack(int first,vector<int>&current,vector<vector<int>>&activities) {
        output.push_back(current);
        
        for(int i = first; i < activities; i++) {
            current.push_back(activities[i]);
            backtrack(i + 1,current,activities);
            current.pop_back();
        }

    }

vector<vector<int>>generateAllPossibleCombinations(vector<int>&activities) {
    output.clear();
    vector<int>current;
    backtrack(0,current,activities)
    return output;
 }
 
}



//O(2^n * n) TC for each subsets copying takes a O(n) 


