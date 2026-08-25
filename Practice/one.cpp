#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>&arr)
{

    if(arr.empty()) {
        return 0;
    }

    int count = 1, i = 1;
    for(int j = 1; j < n; j++) {
        if(arr[j] == arr[j -1]) {
            count++;
        } else {
            count = 1;
        }
    

    if(count <= 2) {
        arr[i] = arr[j];
        i++;
    }
}

    return i;

}

//O(n)
//O(1)
