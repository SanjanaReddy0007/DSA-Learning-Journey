int containerwithMostWater(vector<int>&arr) 
{
  int n = arr.size();
  int maxWater = 0;

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        int water = (j - i) * min(arr[i] , arr[j]);
        maxWater = max(water , maxWater);
    }
  }

  return maxWater;

}


