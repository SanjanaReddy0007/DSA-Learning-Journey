#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<int>&arr , vector<vector<int>>result, vector<int>current, vector<bool>&visited)
{
    if(current.size() == arr.size()) {
        result.push_back(current);
        return;
    }

    for(int i = 0; i < arr.size(); i++) {
        if(!visited[i]) {
           visited[i] = true;
           current.push_back(arr[i]);
           backtrack(arr,result,current,visited);
           current.pop_back();
           visited[i] = false;
        }
    }
}


vector<int>Permuattaions(vector<int>&arr)
{
    vector<vector<int>>result;
    vector<bool> visited(arr.size() , false);
    vector<int>current;
    backtrack(arr,result,current,visited);
    return result;
}


//O(n)

