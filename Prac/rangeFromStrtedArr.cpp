vector<string>RangeFromStartedArray(vector<int>&numbers)
{
    int start = numbers[0];
    int n = numbers.size();
    vector<string>res;

   for(int i = 1; i <= n; i++) {
     if(i == n || nums[i] != nums[i - 1] + 1) {
        if(start == nums[i - 1]) {
            res.push_back(to_string(start));
        } else {
            res.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
        }

        if(i < n) {
            start = nums[i - 1];
        }
     }
   }

  return res;

}

