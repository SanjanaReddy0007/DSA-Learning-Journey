#include<bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>&arr)
{
    int n = arr.size();
    int majority = 1;
    int leader = arr[0];


    for(int i = 0; i < n; i++) {
        if(majority == 0) {
            leader = arr[0];
            majority++;
        } else {
            if(leader == arr[i]) {
                majority++;
            } else {
                majority--;
            }
        }
    }

    return leader;

}


//TC:- O(n) bcs traverse arr only once 
//SC :- O(1)

