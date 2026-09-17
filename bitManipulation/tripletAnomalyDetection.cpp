
vector<int>TripletAnomalyDetetion(vector<int>&vals)
{
    int singleNum = 0, doubleNum = 0;
    int n = vals.size();

    unordered_map<int,int>m;
    for(auto num : vals) {
        m[num]++;
    } 

    for(auto entry : m) {
        if(entry.second == 1) {
            singleNum = entry.first;
        } else if(entry.second == 2) {
            doubleNum = entry.first;
        }
    }

    return {singleNum , doubleNum};
}


