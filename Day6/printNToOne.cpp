#include<bits/stdc++.h>
using namespace std;


int printNtoOne(int i,int n) {
   if(i == 0) {
    return;
   }
   
   cout<<i<<" ";
   printNtoOne(i - 1, n);

}


int main() {
  int n;
  cin>>n;
  printNtoOne(n,n);
  return 0;
}


//TC:- O(n)


