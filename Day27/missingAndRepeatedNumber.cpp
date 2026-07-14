#include<bits/stdc++.h>
using namespace std;

vector<int> RepeatedAndMissedNumber(vector<int>& arr, int n) {
    
    vector<bool>checked(n + 1, false);
    int missed = -1 , repeated = -1;
    
    for(int i = 0; i < n; i++) {
        if(checked[arr[i]]) {
            repeated = arr[i];
        } else {
            checked[arr[i]] = true;
        }
    }

    for(int i = 1; i <= n; i++) {
        if(!checked[i]) {
            missed = i;
            break;
        }
    }

    return {missed , repeated};

}



int main() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i = 0; i < n; i++) {
    cin>>arr[i];
   }
   
   vector<int>result = RepeatedAndMissedNumber(arr,n);
   cout<<result[0]<<" "<<result[1];

   return 0;
}


//TC :- O(n)
//SC :- O(n)



