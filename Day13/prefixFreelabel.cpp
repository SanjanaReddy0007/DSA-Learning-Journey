#include<bits/stdc++.h>
using namespace std;


bool ValidPrefix(vector<string>& labels) {
    int n = labels.size();
    
    sort(labels.begin() , labels.end());

    for(int i = 0; i+1 < n; i++) {
       if(labels[i + 1].rfind(labels[i],0) == 0) {
           return false;
       }
    }

    return true;

}


//O(nlogn *m) m is the maximum check in worst case
//O(1)




