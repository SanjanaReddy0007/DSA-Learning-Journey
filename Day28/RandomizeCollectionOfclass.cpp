#include<bits/stdc++.h>
using namespace std;

class RandomCollection {
    unordered_map<int,int>mp;
    vector<int>list;


public:
    RandomCollection() {

    }

    bool Add(int val) {
        if(map.find(val) != map.end()) {
            return false;
        }
        
        map[val] = list.size();
        list.push_back(val);
       return true;
    }


   bool remove(int val) {
    if(map.find(val) == map.end()) {
        return false;
    }
    
    int idx = map[val];
    int lastelm = list.back();
    list[idx] = lastelm;
    map[lastelm] = idx;
    list.pop_back();
    map.erase(val);
    return true;
   }


   int getRandom(int val) {
     srand(time(0));
     return list[rand() % list.size()];
   }


}



//add remove find all operations perform at the O(1) time 
// O(n) for SC



