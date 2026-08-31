
vector<int>topKElements(vector<int>&arr , int k)
{
   int n = arr.size();
   unordered_map<int,int>freqmap;

   for(int num : arr) {
      freqmap[num]++;
   }

   vector<pair<int,int>>freqList;
   for(auto& x : freqmap) {
     freqList.push_back({x.second,s.first})
   }

   sort(freqList.rbegin() , freqList.rend());
   vector<int>result;

   for(int i = 0; i < k; i++) {
     result.push_back(freqList[i].second);
   }

   return result;

}

//TC :- O(nlogn)
//SC :- O(n + k)

