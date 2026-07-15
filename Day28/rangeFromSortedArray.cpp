#include<bits/stdc++.h>
using namespace std;

vector<string>rangeFromSortedArray(vector<int> &numbers)
{
   int n = numbers.size();
   int start = numbers[0];

   for(int i = 0; i <= n; i++) {
      if(start == n || numbers[i] != numbers[i - 1] + 1) {
          if(start == numbers[i - 1]) {
            result.push_back(to_string(start)); //if only one reamins then add one
          } else {
            result.push_back(to_string(start) + "->" + to_string(numbers[i - 1]));
          }
   

   if(i < n) {
       start = numbers[i];
    }
  }
}

   return result;
}


//TC :- O(n)
//SC :- O(1)


