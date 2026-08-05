#include <bits/stdc++.h>
using namespace std;

vecctor<int>domiantsArray(vector<int>& arr)
{
    int n = arr.size();
    vector<int>Dominats;

    for(int i = 0; i < n; i++) {
        bool isdominatnt = true;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) isdominat = false;
        }

        if(isdominats) Dominants.push_back(arr[i]);
    }

    return Dominants;
}


//O(n^2) O(n)
