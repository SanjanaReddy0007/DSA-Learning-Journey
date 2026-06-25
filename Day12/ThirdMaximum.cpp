#include<bits.stdc++.h>
using namespace std;


int thirdMaximum(vector<int>&readings) {
    set<int>s (readings.begin() , readings.end());
    
    if(s.size < 3) return *s.rbegin(); //if size less than 3 then stores big value
    auto it = s.rbegin(); 
    advance(*it,2);  //if not forwards value of highest
    return it;

}



//TC :- O(nlogn) logn for insetion into set and n of nums 
//SC := O(1)





