
int maxSumOfalterntiveNumbers(vector<int>&nums) {

    int n = nums.size();
    for(auto& num : nums) {
        num *= num;
    }

   ranges::sort(nums);
  
  return -accumulate(arr.begin() , arr.begin() + n / 2 , 0LL) + 
   accumulate(arr.begin() + n / 2 , arr.end());


}

