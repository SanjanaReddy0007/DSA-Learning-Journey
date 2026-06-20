#include<bits/stdc++.h>
using namespace std;



int NumberPattern(int n ) {
    vector<int>result;
    function <void(int , bool)> helper = [&] (int curr, bool down) {
        result.push_back(curr);
        
        if(curr == n || !down) return;

        if(down) {
           if(curr - 5 <= 0) {
              helper(curr - 5 , false);
           }else{
            helper(curr - 5 , true);
           }
        } else {
            helper(curr + 5 , true);
        }
    } 

    helper(n,true);
    return result;
}

//TC :- O(n / 5)



