#include<bits/stdc++.h>
using namespace std;


vector<int>MajorityelementOptimal(vector<int>& arr)
{
    int n = arr.size();
    int major1 = 0;
    int major2 = 0;
    int leader1 = INT_MIN ;
    int leader2 = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(major1 == 0 && arr[i] != leader2) {
            leader1 = arr[i];
            major1++;
        } else if(major2 == 0 && arr[i] != leader1) {
            leader2 =arr[i];
            major2++;
        } else if(arr[i] == leader1) {
            major1++;
        } else if(arr[i] == leader2) {
            major2++;
        } else {
            major1--;
            major2--;
        }
    }

    vector<int>ans;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == leader1) count1++;
        if(arr[i] == leader2) count2++;
    }

    if(count1 > n/3) ans.push_back(leader1);
    else if(count2 > n/3) ans.push_back(leader2);

}

//TC :-O(n)
//SC : O(1)


