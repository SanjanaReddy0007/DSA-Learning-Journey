
void backtrack(vector<vector<int>>&res, vector<int>&cur, int size, vector<bool>used) {
    if(cur.size() == size()) {
        res.push_back(cur);
        return;
    }

    for(int i = 0; i <= size; i++) {
       if(!used[i]) {
          if(cur.empty() || cur.back() % 2 != i % 2) {
             used[i] = true;
             cur.push_back(i);
             backtrack(res,cur,size,used);
             cur.pop_back();
             used[i] = false;
          }
        }
    }

}

vector<vector<int>>AlternateParityPermutation(int size) {
    vector<bool>used(size + 1,false);
    vector<vecctor<int>>res;
    vector<int>cur;
    backtrack(res,cur,size,used);
    return res;
}


