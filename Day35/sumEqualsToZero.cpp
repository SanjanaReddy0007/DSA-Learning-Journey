#include<bits/stdc++.h>
using namespace std;


long long countZeroTuples(vector<int>A,vector<int>B,vector<int>C,vector<int>D)
{
      int n = A.size();  
      unorderedmap<int,int>m;
      long long count = 0;

      for(int l = 0; l < D.size(); l++) {
           m[D[l]]++;
      }

     for(int i = 0; i < A.size(); i++) {
        for(int j = 0; j < B.size(); j++) {
            for(int k = 0; k < C.size(); k++) {
                Sum = -(A[i] + B[j] + C[k]);
                if(m[sum] == !m.end()) {
                    count = m[sum]++;
                }
            }
        }
     }

     return count;

}

//O(n^3)
//O(n) SC
