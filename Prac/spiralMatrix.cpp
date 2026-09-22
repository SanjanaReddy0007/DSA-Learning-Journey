vector<int> spiralTraversal(vector<vector<int>>& matrix) {
        // Write your code here...
         int m = matrix.size();
         int n = matrix[0].size();
         int row = 0, col = 0;
         int pos = 0;

      vector<int>ans;
      vector<int>rowDelta = {0,1,0,-1};
      vector<int>colDelta = {1,0,-1,0};

      while(ans.size() != n * m) {
        ans.push_back(matrix[row][col]);
        matrix[row][col] = 1000000;

        int nextrow = row + rowDelta[pos];
        int nextcol = col + colDelta[pos];

        if(nextrow >= m || nextrow < 0 || nextCol >= n || nextcol < 0 || matrix[row][col] == 1000000) {
            pos = (pos + 1) % 4;
        }

         row += rowDelata[pos];
         col += colDelta[pos];
      }

      return ans;

}
