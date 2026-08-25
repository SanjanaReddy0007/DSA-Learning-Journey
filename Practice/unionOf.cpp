//brute O(log(m + n) (m + n))
vector<int>UnionOfSort(vector<int>&arr1,vector<int>&arr2)
{
    int n = arr.size();
    set<int>s;

    for(int k : arr1) {
        s.insert(k);
    }

    for(int k : arr2) {
        s.insert(k);
    }

    vector<int>ans(s.begin() , s.end());
    return ans;
}


//OPTIMAL
vector<int>UnionOfSortedArrayyyy(vector<int>&arr1 , vector<int>&arr2)
{
    int i = 0, j = 0;
    vector<int>ans;

    while(i < arr1.size() && j < arr2.size()) {
        if(arr1[i] <= arr2[j]) {
        if(ans.empty() || ans.back() != arr1[[i]]) {
            ans.push_back(arr1[i]);
            i++;
        }
    } else {
          if(ans.empty() || ans.back() != arr2[j]) {
            ans.push_back(arr2[j]);
            j++;
          }
        }
    }

    while(j < arr2.size()) {
        if(ans.empty() || arr2[j] != ans.back()) {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < arr1.size()) {
        if(ans.empty() || arr1[i] != ans.back()) {
            ans.push_back(arr1[i]);
            i++;
        }
    }

    return ans;

}


