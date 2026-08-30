

bool findRotation(int n, vector<vector<int>>& start, vector<vector<int>>& goal) {
        //Write your code here...
        if(start == goal) {
            return true;
        }

        int degree = 3;

      while(degree--) {  
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        for(int i = 0; i < n; i++) {
            reverse(matrix[i].begin() , matrix[i].end());
        }

        if(start == goal) {
            return true;
        }

    };

    return false;
 };