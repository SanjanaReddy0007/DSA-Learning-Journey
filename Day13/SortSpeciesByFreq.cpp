#include<bits/stdc++.h>
using namespace std;


vector<int> sortSpeciesByFreq(vector<int>&codes) {
    
    unordered_map<int,int>freq;
    for(int num : codes) {
        freq[num]++;
    }

    sort(codes.begin() , codes.end() , [&](int a, int b) {
        if(freq[a] == freq[b]) return a < b;
        return freq[a] < freq[b];
    })

    return codes;

}


//TC:- O(nlong)
sc:- O(n) hashmap stores here 




