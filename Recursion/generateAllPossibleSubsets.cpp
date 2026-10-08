
class Solution{
   public:
      vector<vector<int>>output;

    void backtrack(vector<int>&cur, vector<int>&activities, int start) {
          if(start.size() == activities.size()) {
            output.push_back(current);
          }

          for(int i = 0; i < activities.size(); i++) {
             cur.push_back(activities[i]);
             backtrack(cur , activities , i + 1);
             cur.pop_back();
          }

          

     }



vector<vector<int>>AllPossibleSubsets(vector<int>&activities) {
    output.clear();
    vector<int>cur;
    backtrack(cur,activities, 0);
    return output;
}

}
