
int countProductsPairs(vector<int>&prices) {
   int n = prices.size();
   int count = 0;

   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        if(prices[j] > 2*prices[i]) {
            count++;
        }
    }
   }

   return count;

}

