
double computeFractionalWeightAndProfit(vector<vector<int>>&entries, int limit) {
    int n = entries.size();
   sort(entries.begin() , entries.end(),[](auto&a, auto &b) {
       return (double)a[0] / a[1] / b[0] / b[1];
   });

     double tw = 0, tp = 0;
   for(auto s : entries) {
       weight = s[1] , price = s[0];
       if(tw + weight < limit) {
          tw += w;
          tp += price;
       } else {
          int remain = limit - tw;
          tp += (remain / w) * price;
          tw = limit;
          break; 
       }
   }

   if(tw < limit) return -1;
   return tp;
}

