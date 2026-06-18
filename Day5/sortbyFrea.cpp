#include<bits/stdc++.h>
using namespace std;


string sortbyFrequency(string s){
    
    vector<pair<char,int>>arr{126,{0,0}};

    for(char ch:s) {
        arr[ch] = {arr[ch].first+1,ch};
    }

    sort(arr.begin(),arr.end(),greater<pair<char,int>>());
     
    string ans = "";

    for(int i = 0; i < 123; i++) {
         ans.append(string(arr[i].first,arr[i].second));
    }

    return ans;


}







//O(n)




