
bool validAagram(string s1,string s2) {
    if(s1.size() != s2.size()) {
        return false;
    }

    unordered_map<char,int>countS;
    unordered_map<char,int>countM;

    for(int i = 0; i < s1.size(); i++) {
        countS[s1[i]]++;
        countM[s2[i]]++;
    }

    return countS == countM;

}

