vector<int>topkelement(vector<int>&arr, int k)
{
    int n = arr.size();
    unordered_map<int,int>m;

    for(int num:arr) {
        m[num]++;
    }

    priority_queue<pair<int,int>,pair<int,int>,greater<pair<int,int>>>pq;
    for(auto& num : m) {
        pq.push_back({m.second,m.first});
        if(pq.size() > k) pq.pop();
    }

    vector<int>result;
    while(!pq.empty()) {
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;
}

