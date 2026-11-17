
int platformScheduling(vector<int>&apart, vector<int>&depart) {
    int n = apart.size();
    int ans = 0;

    for(int t = 0; t <= 2359; t++) {
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] <= t && t <= depart[i]) {
               count++;
            }
        }
        ans = max(ans , count);
    }
 
    return ans;
}
