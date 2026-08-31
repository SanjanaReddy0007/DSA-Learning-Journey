int ofourSumTupe(vector<int>&A,vector<int>&B,vector<int>&C, vector<int>&D) {
   int count = 0;

   for(int i = 0; i < A.size(); i++) {
    for(int j = 0; j < B.size(); j++) {
        for(int k = 0; k < C.size(); k++) {
            for(int l = 0; l < D.size(); l++) {
                if(A[i] + B[j] + C[k] + D[l] == 0) {
                    count++;
                }
            }
        }
    }
   }

   return count;

}

