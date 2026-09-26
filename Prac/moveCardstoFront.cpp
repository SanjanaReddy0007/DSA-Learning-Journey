
vector<int>moveCardsToFront(vector<int>&cards, vector<int>&req)
{
    int n = req.size();
    unordered_set<int>moved;
    vector<int>front;

    for(int i = n - 1; i >= 0; i--) {
        int window = req[i];
        if(!moved.count(window)){
            moved.insert(winow);
            front.push_back(window);
        }
    }

    vector<int>ans = front;
    for(int i = 0; i < cards.size(); i++) {
        if(!moved.count(cards[i])) {
            ans.push_back(cards[i]);
        }
    }

    return ans;

}


