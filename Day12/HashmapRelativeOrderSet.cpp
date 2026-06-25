#include<bits/stdc++.h>
using namespace std;


vector<int>relativeSort(vector<int>arr1, vector<int>arr2) {
    vector<int>result;
    vector<int>remaining;
    unordered_map<int,int>countmap;


    //first only count how many items in arr2 neede
    for(int num : arr2) {
        countmap[num] = i;
    }

    //after only search elements specific which needed in arr2 to arr1 if founfd increase count else add to remaining  
    for(int num : arr1) {
        if(countmap.find(num) != countmap.end()) {
            result.push_back(num);
        }else{
            remaining.push_back(num);
        }
    }

    sort(remaining.begin() , remaining.end());


    //it is for the purpose is if appread twice then too added to list so sort until thta num appear and oysh to result
    for(int num : arr2) {
        for(int i = 0; i < countmap[num]; i++) {
            result.push_back(num);
        }
    }

    for(int num : remaining) {
        result.push_back(num);
    }


    return result;

}



//tc:- O(nlogn +m) for soting O(nlogn ) for push O(n) for arr1 O(n) for arr2 O(m)
//sc : O(m + n) 




