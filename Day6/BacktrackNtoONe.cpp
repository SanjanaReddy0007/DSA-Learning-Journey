#include<bits/stdc++.h>
using namespace std;

int BacktrackNtoOne(int i, int n) {
   if(i == n + 1) {
      return;
   }

   BacktrackNtoOne(i + 1,n);
   cout<<i<<" ";
}


int main(){ 
    int n;
    cin>>n;
    BacktrackNtoOne(1,n);
    return 0;
}


TC:- O(n)  





