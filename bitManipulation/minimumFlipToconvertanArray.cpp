void helperFunction(int start, int goal, vector<int>&ans)
 {
    int xorr = start ^ goal;
    int count = 0;

    while(xorr != 0) {
        count++;
        xorr = xorr & (xorr - 1);
    }

    return count;
 }
 

int minum(vector<int>&arr1,vector<int>&arr2,int n) {
   vector<int>ans;

   for(int i = 0; i < n; i++) {
      helperfunction(arr1[i],arr2[i],ans);
   }

   return ans;

}

