#include<bits/stdc++.h>
using namespace std;


//BRUTE i<j<k tta condtition is:- value[i] - value[j] + value[k] that the value should be maximum return 

int maximumTripletsValue(vector<int>& triplets)
{
  int n = triplets.size();
  int ans = INT_MIN;

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        if(triplets[i] >= triplets[j]) {
            contine;
        }

        for(int k = j + 1; k < n; k++) {
            if(triplets[j] < triplets[k]) {
                int current = triplets[i] - triplets[j] + triplets[k];
                answer = max(answer,current);
            }
        }
    }
  }

   return answer;
}


//O(n^3)
//SC :- O(1)

