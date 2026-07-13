#include<bits/stdc++.h>
using namespace std;

int removeElement(int n,int target, vector<int>&arr) {
   int pos = 0;
   for (int i = 0 ; i < arr.size(); i++) {
       if(arr[i] != target) {
           arr[pos] = arr[i];
           pos++;
       }
   }
   return pos;
};

int main() {
    int n,target;
    cin>>n;
    vector<int>arr(n);
     cin>>target;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
  
    int length = removeElement(n,target,arr);
    cout<<length<<endl;
    for(int i = 0; i < length; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}




//O(n) TC
//SC :- O(1)
