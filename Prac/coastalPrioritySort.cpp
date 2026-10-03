
vector<vector<int>>coastalPrioritysort(vector<vector<int>>&points) {
    int n = points.size();
    sort(points.begin() , points.end() , [](vector<int>&a,vector<int>&b) {
        long long scoreA = 2 * (a[1] * a[2]);
        long long scoreB = 2 * (b[1] * b[2]);

        if(scoreA != scoreB) return scoreA > scoreB;
        return a[0] < b[0];
    });

    return points;

}

