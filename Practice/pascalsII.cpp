vector<int>getRow(int n , int k) {
   vector<int>row(1,1);

   for(int i = 1; i <= k; i++) {
      row.push_back(1);
      for(int j = i - 1; j > 0; j--) {
         row[j] += row[j - 1];
      }
   }
 
   return row;
  
}

