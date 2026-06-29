#include<bits./stdc++.h>
using namespace std;


vector<int>SortDeliveryPoints(vector<int>&points,int n,int hub) {
    sort(points.begin(), points.end(),[hub] (int a, int b) {
        int da = abs(hub  a);
        int db = abs(hub - b);

        if (da != db) return da < db;
        return a < b;
    })
  
    return points;
}


