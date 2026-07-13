#include<bits/stdc++.h>
using namespace std;

int LargestInArr(int n,int arr[]) {
    int maxx = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxx) {
            maxx = arr[i];
        }
    }
    cout<<maxx;
}

//O(n) TC


//BRUTE FORCE METHOD........................! :) :) :) :) :) :) :) :) :) :)
sort(arr.begin() , arr.end());
cout<<Arr[n - 1];
//TC :- O(nlogn)


