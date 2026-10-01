
int thirddistanceMaximum(vector<int>&arr) {
    int n = arr.size();
    set<int>s(arr.rbegin() , arr.rend());

    if(s.size() < 3) return s.rbegin();
    int it = s.rbegin();
    advance(it,2);
    return *it;
}

