
//using two pointer + ELIMINATION
bool knows(vector<vector<int>>&inter, int a, int b, int n) {
    return inter[a][b] == 1;
}

int findLumiary(vector<vector<int>>&inter , int n) {
     int start = 0, end = n - 1;

     while(start < end) {
        if(knows(inter,start,end,n)) {
            start++;
        } else {
            end--;
        }
     }

     int potential = start;

     for(int i = 0; i < n; i++) {
        if(i != potential && inter[potential][i] == 1) {
            return -1;
        }
     }

     for(int i = 0; i < n; i++) {
        if(i != potential && inter[i][potential] == 0) {
            return -1;
        }
     }

     return potential;

}

