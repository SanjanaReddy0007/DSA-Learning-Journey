class Solution{
    public:
       int size;
       vector<vector<string>>Solutions;

      vector<string>createTwoMatrixes(vector<vector<char>>& state) {
        vector<string>mt;
        for(int row = 0; row < size; row++) {
           string currentrow(state[row].begin() , state[row].end());
           mt.push_back(currentrow);
        }
         return mt;
      }

     
      void backtrack(int row,unordered_set<int>&diagonals,unordered_set<int>& antidiagonals,unordered_set<int>&cols,vector<vector<int>>&state) {
         if(size == row) {
            Solutions.push_back(createTwoMatrixes(state));
            return;
         }

         for(int col = 0; col < size; col++) {
            int currentDiagonal = row - col;
            int currentAntiDiagonal = row + col;

            if(cols.count(col) || diagonals.count(currentDiagonal) || antidiagonals.count(currentAntiDiagonal)) {
                continue;
            }

            cols.insert(col);
            diagonals.insert(currentDiagonal);
            antidiagonals.insert(currentAntiDiagonal);
            state[row][col] = 'Q';

            backtrack(row + 1, diagonals,antidiagonals,cols,state);

            cols.erase(col);
            diagonals.erase(currentDiagonal);
            antidiagonals.erase(currentAntiDiagonal);
            state[row][col] = '.';

         }
         
      }


      vector<vector<string>>NQueenes(int n) {
        size = n;
        Solutions.clear();
        vector<vector<char>>emptyMat(size,vector<char>(size,'.'));
        unordered_set<int>diagonals,antidiagonals,cols;
        backtrack(0,diagonals,antidiagonals,cols,emptyMat);
        return Solutions;
    }

}










