#include <bits/stdc++.h>
using namespace std;

int fourSumToZeroBrute(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D)
{
    int n = A.size();
    unordered_map<int,int>findMap;
    int count = 0;

    for(int c : C) {
        for(int d : D) {
           findMap[c+d]++;
        }
    }


    for(int a : A) {
        for(int b : B) {
            int sum = a + b;
            if(findSum.map(sum) != findSum.end()) {
                count += findSum[sum]++;
            }
        }
    }

    return count;
}


//O(n^2)
//O(n^2)

