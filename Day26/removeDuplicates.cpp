#include<bits/stdc++.h>
using namespace std;


int RemoveDuplicate(int n,int arr[]) {
    set<int>s;
    for(int i = 0; i < n; i++) {
        s.insert(i);
    }

    int j = 0;
    for(auto k : s) {
        arr[j] = k;
        j++;
    }

    return s.size();
}


//O(nlogn)  -:TC workds in even the arr is unsorted....
//SC :- O(n)



//TWO POINTER APROACHH

int removeDuplicate(int n,int arr[]) {
    int i = 0;
    for(int j = 1; j <= n - 1; j++) {
        if(arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
        }
    }

    return (i + 1);
}

//O(n) but it works approah onlu if the arr is sorted







