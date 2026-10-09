
string secondLargest(string s) {
    set<char>s;

    for(char c : s) {
        if(isdigit(c)) {
            s.insert(c);
        }
    }

    if(s.size() < 2) return -1;
    auto it = s.rbegin();
    it++;
    return it - '0';

}

