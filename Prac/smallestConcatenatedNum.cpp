
string arrangeSmallestConcatenatedNums(vector<int>&nums)
{
   int n = nums.size();
   vector<string>v;

   for(int i = 0; i < n; i++) {
    v.push_back(to_string(nums[i]));
   }

   sort(v.begin() , v.end() ,[](string &a, string &b) {
      return a + b < b  a;
   })

   string ans = "";
   for(string &s : v) {
       ans += s;
   }

   return ans;

}


