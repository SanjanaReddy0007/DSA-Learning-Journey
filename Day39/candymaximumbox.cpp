#include<bits/stdc++.h>
using namespace std;

//sliding window approachhhhhhhhhhhh...............

int maximumcandies(int maxsweet, vector<int>& candies) {
    int n = candies.size();
    int count = 0;
    int product = 1;

    int start = 0;
    for(int end = 0; end < n; end++) {
        product *= candies[end];

        while(product >= maxsweet && start <= end) {
            product /= candies[start];
            start++;
        }

        count += (end - start + 1);
    }

    return count;
}

//TC :- O(n)
//SC :- O(1)

