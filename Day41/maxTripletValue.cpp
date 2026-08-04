#include <bits/stdc++.h>
using namespace std;

int maxTripletValue(vector<int>& values) {
    int n = values.size();
    int ans = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(values[i] <= values[j]) {
                continue;
            }

            for(int k = j + 1; k < n; k++) {
                int current = values[i] - values[j] + values[k];
                ans = max(ans,current);
            }
        }
    }

    return ans;
}

//TC :- O(n^3)
//O(1)

