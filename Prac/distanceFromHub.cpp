
vector<int>DistanceFromHub(vector<int>&points, int hub, int n) {
    
    sort(points.begin() , points.end() ,[hub](int &a, int &b) {
        int da = abs(hub - a);
        int db = abs(hub - b);
        if(da != db) return da < db;
        return a < b;
    })

    return points;

}


