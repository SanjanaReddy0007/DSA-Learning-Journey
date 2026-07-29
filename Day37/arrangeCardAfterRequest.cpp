#include<bits/stdc++.h>
using namespace std;


vector<int>arrangeCardAfterRequestBrute(vector<int>& cards, vector<int>& requests)
{
    for(int i = 0; i < (int)request.size(); i++) {
        int card = request[i];
        int pos = -1;

        for(int j = 0; j < cards.size(); j++) {
            if(card[j] == card) {
                pos = j;
                break;
            }
        }

        if(pos > 0) {
            int value = card[pos];
            card.erase(card.begin()+pos);
            card.insert(card.begin(),value);
        }
    }

    return card;
}


//TC :- O(m*n)
//SC :- O(1)

