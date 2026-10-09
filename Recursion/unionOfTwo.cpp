
vector<int>UnionOfTwoSortedArray(vector<int>&a, vector<int>&b) {
    int i = 0 , j = 0;
    int ans = INT_MAX;

    while(i < a.size() && j < b.size()) {
       if(a[i] <= b[j]) {
        if(ans.empty() || arr[i] != ans.back()) {
            ans.push_back(arr[i]);
            i++;
        } 
       } else {
          if(ans.empty() || arr[j] != ans.back()) {
             ans.push_back(b[j]);
             j++;
          }
       }
    }

    return ans;

}

