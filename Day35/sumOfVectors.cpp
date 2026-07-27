#include<bits/stdc++.h>
using namespace std;


int sumOfFourVectos(vector<int>A,vector<int>B,vector<int>C,vector<int>D)
{
   int n = A.size();
   long long count = 0;

   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        for(int k = 0; k < n; k++) {
            for(int l = 0; l < n; l++) {
                if(A[i] + B[j] + C[k] + D[l] == 0) {
                    count++;
                }
            }
        }
     }
   }

   return count;
}

//TC :- O(n^4)
//SC :- O(1)

