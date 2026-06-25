#include<bits/stdc++.h>
using namespace std;


bool consecutiveSequenceValidation(vector <int> &identifiers) {
       sort(identifiers.begin() , identifiers.end());
      
       for(int i = 0; i < identifiers.size(); i++) {
           if(identifiers[i] + 1 != identifiers[i + 1]) {
              return false;
           }
       }
      
        return true;
}



//TC:- O(nlong) for soritng and O(n) for traverse overall O(nlogn)
//Sc:- O(1) no need of extra spces


