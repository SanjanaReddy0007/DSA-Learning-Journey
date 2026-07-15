#include<bits/stdc++.h>
using namespace std;

int prefixEquilizationMoves(vector<int>&values)
{
    int count  = 0;
    int n = values.size();
    for(int i = n - 1; i >= 1; i--) {
        if(values[i] != values[i - 1]) {
            count++;
        }
    }

    return count;
}

//TC :- O(n) for moving from righttttoolefttt
//SC :- O(1)

