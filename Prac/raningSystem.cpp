
vector<string>ParticipateRankingSystem(vector<string>&parti, vector<int>&points)
{
    int  n = parti.size();
    unordered_map<int,string>pair;

    for(int i = 0; i < n; i++) {
        pair[points[i]] = parti[i];
    }

    sort(points.begin() , points.end(),greater<int>());
     
    for(int i = 0; i < n; i++) {
        parti[i] = pair[points[i]];
    }
    return parti;
}
