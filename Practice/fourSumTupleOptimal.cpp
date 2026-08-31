long long fourSumTupe(vector<int>&A,vector<int>&B,vector<int>&C, vector<int>&D) {
   int count = 0;
   
   unordered_map<int,int>mp;

   for(int c : C) {
    for(int d : D) {
        mp[c + d] ++;
    }
   }

   for(int a : A) {
    for(int b : B) {
        int sum = -(a + b);
        if(mp.find(sum) != mp.end()) {
            count += mp[sum];
        }
    }
 }
 
 return count;
}

