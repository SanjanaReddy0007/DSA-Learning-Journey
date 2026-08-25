int moveZeroestoFrontOptimal(vector<int>&arr, int n) {

    int zeroesCount = 0;

     for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            zeroesCount++;
        }
     }   

        int lastIndex = n - 1;

     for(int i = n - 1; i >= 0; i--) {
        if(arr[i] != 0) {
            arr[lastIndex] = arr[i];
            lastIndex--;
        }
     }

     for(int i = 0; i < zeroesCount; i++) {
         arr[i] = 0;
     }

}


