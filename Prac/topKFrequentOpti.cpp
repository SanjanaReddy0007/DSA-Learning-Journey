
vector<int>topKFrequent(vector<int>&arr , int k)
{
    int n = arr.size();
    unordered_map<int,int>m;

    for(auto num : arr) {
        m[num]++;
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;

    for(int num : m) {
        pq.push_back({num.second , num.first});
        if(pq.size() > k) pq.pop();
    }

    vector<int>res;
    while(!pq.empty()) {
        res.push_back({pq.entry.second});
        pq.pop();
    }

    return res;

}

