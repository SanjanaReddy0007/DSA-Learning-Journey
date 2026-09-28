
string longestcommonPrefix(vector<string>& s)
{
    int n = s.size();
    int k = 0;
    if(n == 0) return "";
    if(n == 1) return s;

  while(true){
    for(int i = 1; i < n; i++) {
        if(k == s[0].size() || k == s[i].size()) {
            return s[0].substr(0,k);
        }

        if(s[i][k] != s[0][i]) {
            return s[0].substr(0,k);
        }
    }
    k++;
}

}

