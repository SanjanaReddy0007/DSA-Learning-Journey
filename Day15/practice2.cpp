#include<bits/stdc++.h>
using namespace std;



vector<int> relativeSort(vector<int>&arr1 , vector<int>&arr2) {
   vector<int>ans;
   
   for(int num :arr2) {
    for(int i = 0; i < arr1; i++) {
        if(num == arr1[i]) {
            ans.push_back(num);
            arr1[i] = -1;
        }
    }
}

    sort(arr1.begin() , arr1.end());

      for(int a : arr1) {
           if(a >= 0) {
              ans.push_back(a);
           
          }
      } 

      return result;

}





