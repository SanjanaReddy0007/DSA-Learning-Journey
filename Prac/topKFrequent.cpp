
vector<int>TopKFrequent(vector<int>&arr , int k)
{
   int n = arr.size();
   unordered_map<int,int>m;

   for(int i = 0; i < n; i++) {
      m[arr[i]]++;
   }

   vector<pair<int,int>>freList;
   for(int entry : m) {
       freList.push_back({m.second , m.first});
   }

   sort(freList.rbegin() , freList.rend());
   for(int i = 0; i < k; i++) {
     result.push_back(freList[i].second);
   }

   return result;

}


