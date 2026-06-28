#include<bits/stdc++.h>
using namespace std;



vector<int>species(vector<int>&codes) {
    unordered_map<int,int>freq;
    
    for(int x : codes) {
        freq[x] ++;
    } 

    sort(codes.begin() , codes.end() ,[](vector<int>&a,vector<int>&b) {
        if(freq[a] == freq[b]) {
            return a < b;
        }

        return freq[a] < freq[b];
    })  


    return codes;

}






