#include<bits/stdc++.h>
using namespace std;

int maxEligibleResearches(vector<int>& projects)
{
   sort(projects.begin() , projects.end());

    int n = projects.size();
    for(int i = 0; i < n; i++) {
        if(i < n && projects[n - 1 - i] > i + 1) {
            i++;
        }
    }

    return i;
}


//O(nlogn) TC
//SC :- O(1)
