#include <bits/stdc++.h>
using namespace std;


int maxSubarrSum(vector<int>& arr)
{
    int n = arr.size();
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }

             ans = max(ans,sum);
        }
    }

    return ans;
}


//O(n^3) Sc:-O(1)

//better i.e O(n^2) using two loops
main(){
for(int i = 0; i < n; i++) {
    int sum = 0;
    for(int j = i ; j < n; j++) {
        int sum += arr[j];
        ans = max(ans,sum);
    }
}
return ans;
};


//KAdanes
int ans = INT_MIN;
int curr_sum = 0;

for(int i = 0; i < n; i++) {
    curr += arr[i];
    ans = max(curr,ans);

    if(curr < 0) 
      curr = 0;
}

return ans;

//O(n)
//O(1)



