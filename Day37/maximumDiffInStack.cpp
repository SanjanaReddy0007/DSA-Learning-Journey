#include<bits/stdc++.h>
using namespace std;

//pair up sum after taht sort, then find diff from largest & smallesttt 

long long stackBooks(vector<int>& pages,int k)
{
   int n = pages.size();
   int count = 0;
   vector<int>pairs;

   for(int i = 0; i < n - 1; i++) {
     pairs[i] = pages[i] + pages[i + 1];
   }

   sort(pairs.begin() , pairs.end());

   int ans = 0;

   for(int i = 0; i < k - 1; i++) {
      ans += pairs[n - 2 - i] - pairs[i];
   }

   return ans;

}

//O(nlogn)
//SC :- O(n)

