
int findLumiary(vector<vector<int>>&inter , int n) {
    
    for(int i = 0; i < n; i++) {
        bool isLuminary = true;

        for(int j = 0; j < n; j++) {
           if(i != j && inter[i][j] == 1) {
               isLuminary = false;
           }
        }

        if(isLuminary) {
            for(int j = 0; j < n; j++) {
                if(i != j && inter[i][j] == 0) {
                    isLuminary = true;
                    break;
                }
            }
        }

        if(isLuminary) {
            return i;
        }
    }

    return -1;
}



