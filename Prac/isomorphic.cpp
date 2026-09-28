bool helper(string s1, string s2) {
    int n = s1.size();
    if(s1.length() != s2.length()) {
        return false;
    }

    unordered_map<int,int>m;
    for(int i = 0; i < n; i++) {
        if(m.find(s1[i]) == m.end()) {
            m[s1[i]] = m[s2[i]];
        } else if(m[s1[i]] != m[s2[i]]) {
            return false;
        } else {
            return true;
        }
    }
    

}


bool isIsomorPhic(string s1, string s2)
{
   return helper(s1,s2) && helper(s2 , s1);
}


