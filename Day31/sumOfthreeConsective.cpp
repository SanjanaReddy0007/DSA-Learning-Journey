#include<bits/stdc++.h>
using namespace std;

int sumOfThreeConsective(int k)
{
    if(k == 0) {
        return {-1,0,1};
    }

    for(int i = 0; i <= k-2; i++) {
        if(i + (i + 1) + (i + 2) == k) {
            return {i , i + 1, i + 2};
        }
    }

    return {};

}


//TC :- O(n)
//SC :- O(1)

