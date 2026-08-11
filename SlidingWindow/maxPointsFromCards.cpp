#include<bits/stdc++.h>
using namespace std;

int maxPointsFromCards(vector<int>&cards, int k)
{
    int n = cards.size();
    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        totalSum += cards[i];
    }

    if(k == n) return totalSum;


    int windowLen = n - k;
    int windowSum = 0;
    int minSum = totalSum;

    for(int i = 0; i < n; i++) {
        windowSum += cards[i];

    if(i >= windowLen) windowSum -= cards[i - windowLen];
    if(i >= windowLen - 1) minSum = min(totalSum, windowSum);

  } 

 return totalSum - minSum;
}


//O(n)
//O(1)
