
/*vector<string>minWindowSubstringg(string s , string target) {
    int n = s.size();
    unordered_map<int,int>m;
    for(char c:target) {
        m[c]++;
    }

    int i = 0, j= 0, length = INT_MAX;
int count = 0;

    while(j < n ) {
        if(m[s[j]] > 0) count++;
        m[s[j]]--;

        while(count == target.size()) {
            if( j - i + 1 < length) {
                length = j - i + 1;
                start = i;
            }

            m[s[i]]++;
            if(m[s[i]] > 0) count--;
            i++;
        }

        j++;
    }

    return (start == -1) ? "" : s.substr(i , length);

}

*/