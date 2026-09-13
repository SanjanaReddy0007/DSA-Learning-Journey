
vector<vector<int>>PowerSet(vector<vector<int>> &arr)
{
    int n = arr.size();
    for(int num = 0; num < (1 << n); num++) {
        vector<int>temp;
        for(int i = 0; i < n; i++) {
            if(num & (1 << i)) {
                temp.push_back(arr[i]);
            }
        }

        ans.push_back(temp);
    }
    
    return ans;
  
}

