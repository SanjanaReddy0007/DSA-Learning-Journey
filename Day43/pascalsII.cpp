#include <bits/stdc++.h>
using namespace std;


vector<int>getRow(int k)
{
    vector<int>row(1,1);

    for(int i = 1; i <= k; i++) {
        row.push_back(1);
        for(int j = i - 1; i > 0; i--) {
            row[j] += row[j - 1];
        }
    }

    return row;
}


//O(n^2) O(1)

