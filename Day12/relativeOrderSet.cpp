#include<bits/stdc++.h>
using namespace std;


vector<int> RelativeOrder(vector<int>&arr1 , vector<int>&arr2) {
      vector<int>result;

      for(int num : arr2) {
        for(int i = 0; i < arr1.size(); i++) {
            if(num == arr1[i]) {
                result.push_back(arr[i]);
                 arr1[i] = -1;
            }
        }
    }

    sort(arr1.begin() , arr1.end());
       
        for(int num : arr1) {
            if(num >= 0) {
                result.push_back(num);
            }
        }

      return result;

}



//TC :- O(n * m) + O(nlong)
//sorting + first arr runs m * n times...............



