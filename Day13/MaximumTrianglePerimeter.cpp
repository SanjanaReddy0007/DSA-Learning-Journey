#include<bits/stdc++.h>
using namespace std;


int maximumTrianglePerimeter(vector<int> &planks) {
    int n = planks.size();
    sort(planks.rbegin() , planks.rend());
    

    for(int i = 0; i <= 3; i++) {
        if(planks[i] < planks[i + 1] + planks[i + 2]) {
            return planks[i] + planks[i + 1] + planks[i + 2];
        }
    }
    
    return -1;

}


//we need to maximum perimeter so need to calculate from the largest side to the smallest
// TC :- O(nlogn) sorting + O(n) fro checking arr triplet condition
//sc :_ O(1)



