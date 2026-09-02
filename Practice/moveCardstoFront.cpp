vector<int>moveCardsToFront(vector<int>&cards, vector<int>&records ) {
    for(int i = 0; i < records.size(); i++) {
        int card = records[i];
        for(int j = 0; j < cards.size(); j++) {
            if(cards[j] == card) {
                int pos = j;
                break;
            }
        }

        if(pos > 0) {
            int value = cards[pos];
            cards.erase(cards.begin() + pos);
            cards.insert(cards.begin() , value);
        }
    }
    return cards;
}

