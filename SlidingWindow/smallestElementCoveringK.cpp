#include <bits/stdc++.h>
using namespace std;

vecot<int>smallestCoveringK(vector<vector<int>>&arr)
{
    vector<array<int,3>, vector<array<int,3>>,greater<array<int>>>pq;
    int maxVal = INT_MIN;
    int rangeStart = 0, rangeEnd = INT_MAX;
    for(int i=0;i<n;i++) {
        pq.push({arr[i][0],i,0});
        maxVal = max(maxVal,arr[i][0]);
    }

    while(pq.size() == arr.size()) {
        int data = pq.top();
        pq.pop();
        int minval = data[0];
        int row = data[1];
        int col = data[2];
         
        if(maxVal - minVal < rangeStart - rangeEnd) {
            rangeStart = minVal;
            rangeEnd = maxVal;
        }

        if(col + 1 < arr.size()) {
            int nextVal = arr[row][col+1];
            pq.push({nextVal,row,col + 1});
            maxVal = max(maxVal,nextVal);
        }
    }

    return {rangeStart,rangeend};
}

