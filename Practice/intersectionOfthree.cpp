
vector<int>IntersectionOfthreesortedArr(vector<int>a,vector<int>b,vector<int>c) {
   int i = 0, j = 0, k = 0;
   vector<int>ans;

   while(i < a.size() && j < b.size() && k < c.size()) {
      if(a[i] == b[j] && b[j] == c[k]) {
         ans.push_back(a[i]);
         i++;
         j++;
         k++;
      } else  {
            int currentMin = min(a[i] , min(b[j],c[k])) ;

            if(a[i] == currentMin) i++;
            if(b[j] == currentMin) j++;
            if(c[k] == currentMin) k++;
      }
   }

   return ans;

}




