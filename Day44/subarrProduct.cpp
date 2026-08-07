#include <bits/stdc++.h>
using namespace std;

//BRUTEEeee O(n^3) O(1)
int maxProduct(vector<int>& arr)
{
    int n = arr.size();
    double ans = INT_MIN;

    for(int i = 0; i < n; i++ ){
        for(int j = i; j < n; j++) {
            double product = 1;
            for(int k = i; k <= j; k++) {
                product *= arr[k];
            }
            ans = max(ans, product);
        }
    }

    return (int)ans;

}



//Better O(n^2) O(1)

int maxProduct(vector<int>&arr)
{
    int n = arr.size();
    double ans = INT_MIN;

    for(int i = 0; i < n; i++) {
        double product = 1;
        for(int j = i; j < n; j++) {
            product *= arr[j];
             ans = max(ans, product);
        }
    }

    return (int)ans;
}


