#include <bits/stdc++.h>
using namespace std;


vector<int>moveCardfrontBrute(vector<int>& cards, vector<int>& requests) 
{
   for(int i = 0; i < request.size(); i++) {
       int pos = -1;
       int card = request[i];

       for(int j = 0; j < cards.size(); j++) {
        if(cards[j] == card) {
            pos = j;
            break;
        }
       }

      if(pos > 0) {
        int value = cards[pos];
        cards.erase(cards.begin() + pos);
        cards.insetr(cards.begin(),pos);
      }
   }

   return cards;

}


//TC :- O(n*m)
//SC :- O(1)
