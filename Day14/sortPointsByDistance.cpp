#include<bits/stdc++.h>
using namespace std;

vector<int>sortDeleiveryPoints(int hub, int n, vector<int>& points) {
    sort(points.begin() , points.end() , [hub](int &a, int &b) {
        int hub1 = abs(a - hub);
        int hub2 = abs(b - hub);
        if(hub1 != hub2) return hub1 < hub2;
        
        return a < b;

    })

    return points;
}


//TC :- O(nlogn) comparison takes a  O(1) time and sorting takes a nlogn of time, and 
//SC :- O(n) for worst case store of DATA............


