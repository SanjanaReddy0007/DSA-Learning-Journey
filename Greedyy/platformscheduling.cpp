
int minPlatforms(vector<int>&apart, vector<int>&depart) {
    int n = apart.size();
    int i = 0, j = 0, count = 0,ans = 0;
    sort(apart.begin() , aprt.end());
    sort(depart.begin(),depart.end());
 
    while(i < n) {
        if(apart[i] <= depart[j]) {
            i++;
            count++;
            ans = max(ans , count);
        } else {
            count--;
            j++;
        }
    }

    return ans;
}

