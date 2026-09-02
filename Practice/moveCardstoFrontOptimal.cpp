vector<int>moveCardstorontOptimal(vector<int>&cards, vector<int>&requests) {
    int n = requests.size();
     unordered_set<int>store;
     vector<int>front;


     for(int i = n - 1; i >= 0; i--) {
        int window = requests[i];
        if(!store.count(window)) {
            store.insert(window);
            front.push_back(window);
        }
     }

     vector<int>ans = front;
     for(int i = 0; i<cards.size(); i++) {
        if(!store.count(cards[i])) {
            ans.push_back(ards[i]);
        }
     }

     retrun ans;
}
