#include <bits/stdc++.h>
using namespace std;


vector<int>arrangeCardsAfter(vector<int>&cards, vector<int>& requests)
{
  unordered_map<int>moved;
  vector<int>front;

  for(int i = request.size() - 1; i >= 0; i--) {
     int window = requests[i];
     if(!moved.count(window)) {
        moved.insert(window);
        front.push_back(window);
     }
  }

 vector<int>ans = fornt;
 for(int i = 0; i < cards.size(); i++) {
    if(!moved.count(cards[i])) {
        ans.push_back(cards[i]);
    }
 }

 return ans;
}


//TC: - O(n+q)
//O(n)
