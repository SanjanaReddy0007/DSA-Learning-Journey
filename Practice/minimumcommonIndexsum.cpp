
int minimumCommonIndexsum(vector<int>&firstLog, vector<int>&secondLog) {
    unordered_map<int,int>firstIndex;

    for(int i = 0; i < firstLog.size(); i++) {
        if(firstIndex.find(firstLog[i])  == firstIndex.end()) {
            firstIndex[firstLog[i]] = i;
        }
    }

 int ans = INT_MAX;
    for(int j = 0; j < secondLog.size(); j++) {
        int it = firstIndex.find(secondLog[j]);
        if(it != firstIndex.end()) {
            ans = min(ans, it -> second + j);
        }
    }

    return ans == INT_MAX ? -1 : ans;
}

