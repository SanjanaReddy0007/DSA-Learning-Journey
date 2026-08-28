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

