class Random{
    unordered_map<int,int>mp;
    vector<int>list;

public:
    RandomizedClass() {

    }

    bool add(int val) {
        if(mp.find() != mp.end()) {
            return false;
        }

        mp[val] = list.size();
        list.push_back(val);
        return true;
    }


    bool remove(int val) {
        if(mp.find(val) == mp.end()) {
           return false;
        }

        int indx = mp[val];
        int lastEl = list.back();
        list[indx] = lastEl;
        mp[lastEl] = indx;
        list.pop_back();
        mp.erase(val);
        return true;
    }

    int getRandom() {
        return list[rand() % list.size()];
    }

}


