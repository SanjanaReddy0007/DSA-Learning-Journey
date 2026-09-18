class Solution{
    public:
        unordered_map<int,int>m;
        vector<int>list;

    RandomalizeCollection() {

    }

    bool add(int val) {
        if(m.find(val) != m.end()) {
           return false;
        }

        m[val] = list.size();
        list.push_back(val);
        return true;
    }

    bool remove(int val) {
        if(m.find(val) == m.end()) {
            return false;
        }

        int idx = m[val];
        int lastEl = list.back();
        list[idx] = lastEl;
        m[lastEl] = idx;
        list.pop_back();
        m.erase(val);
        return true; 
    }

    int getRandom() {
        return list[rand() % list.size()];
    }

}

