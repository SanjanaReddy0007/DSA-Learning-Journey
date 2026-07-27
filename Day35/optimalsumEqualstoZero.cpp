#include<bits/stdc++.h>
using namespace std;


long long sumEqualsToZero(vector<int>A,vector<int>B,vector<int>C,vector<int>D)
{
    int n =A.size();
    long long count = 0;
    unordered_map<int,int> findSum;

   for(int c : C) {
    for(int d : D) {
        findSum[c + d]++;
    }
   }

    for(int a:  A) {
        for(int b : B) {
             sum = -(a + b);
             if(findSum.find(sum) != findSum.end()) {
                 count += findSum[sum]++;
             }
        }
    }

    return count;
}

//TC :- O(n^2)
//SC :- O(n^2)
