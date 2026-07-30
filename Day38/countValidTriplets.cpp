#include<bits/stdc++.h>
using namespace std;

int countTriplets(vector<int>& triplets, int m)
{
    int n = triplets.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            for(int k = j; k < n; k++) {
               long long sum += 1LL*arr[i] + arr[j] + arr[k];
               if(sum % m== 0) {
                  ans++;
               }
            }
        }
    }

    return ans;
}

//TC :- O(n^3)
//SC :- O(1)
