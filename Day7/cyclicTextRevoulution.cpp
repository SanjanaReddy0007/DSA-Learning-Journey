#include<bits/stdc++.h>
using namespace std;


char textRevolution(int k ){
      int shift = __builtin_popcount(k - 1) % 26;
      return char( 'a' + shift);
}

//why because char eachtime revilves and finds val again and again so it create a binary val in 1s and delete that val from a i.e char val 97 - that shift val gives ans 
// O(1)






