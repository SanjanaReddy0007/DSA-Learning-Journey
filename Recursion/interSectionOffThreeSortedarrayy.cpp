
vector<int>IntersectionOfThreeSortedarray(vector<int>&a, vector<int>&b, vector<int>&c) {
    int i = 0, j = 0, k = 0;
    int ans = INT_MIN;

    while(i < a.size() && j < b.size() && k < c.size()) {
        if(a[i] == b[j] && b[j] == c[k]) {
            ans.push_back(a[i]);
            i++;
            j++;
            k++;
        } else {
            int curMin = min(a[i] , min(b[j] , c[k]));
            if(a[i] == curMin) {
                i++;
            }

            if(b[j] == curMin) {
                j++;
            }

            if(c[k] == curMin) {
                k++;
            }
        }
    }

    return ans;

}



