#include <bits/stdc++.h>
using namespace std;

long long asymmetricRingRouting(vector<int>&clockwise, vector<int>&counterclockwise, vector<int>& visits)
{
    int n = clockwise.size();
    long long totaltime = 0;
    int curr = 0;

    for(int target : visits) {
        if(curr == target) continue;

        long long cwcost = 0;
        int node = curr;
        while(node != curr) {
            cwcost += clockwise[node];
            node = (node + 1) % n;
        }

        long long cocwcost = 0;
        node = curr;
        while(node != curr) {
            cocwcost += counterclockwise[node];
            node = (node - 1 + n) % n;
        }

      totaltime += min(cwcost, cocwcost);
      curr = target;
    }

    return totaltime;

}

//O(n*q)
//SC :- O(1)

