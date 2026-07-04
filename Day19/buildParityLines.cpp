#include<bits/stdc++.h>
using namespace std;



void backtrack(int size,vector<int>&path,vector<bool>used,vector<vector<int>>&result) {
     if(path.length() == size) {
        result.push_back(path);
        return;
     }

     for(int i = 1; i <= size; i++) {
        if(!used[i]) {
            if(path.empty() || (path.back() % 2 != i%2)) {
                used[i] = true;
                path.push_back(i);
                backtrack(size,path,used,result);
                path.pop_back();
                used[i] = false;
            }
        }

     }


}


vector<vector<int>>buildParityLines(int size) {
    vector<vector<int>>result;
    vector<bool>used(size + 1, false);
    vector<int>path;
    backtrack(size,path,used,result);
    return result;
}







//TC:- O(n! * n)
//SC :- O(n! * n) the space complexity of the valid combinations stored in the arrayyyyyyyyyy

