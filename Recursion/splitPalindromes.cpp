
bool validPalindrome(string s) {
    int left  = 0, right = s.length - 1;

    while(left < right) {
        if(s[left] != s[right]) {
            return false
        }

        left++;
        right--;
    }

    return true;

}


void backtrack(vector<string>current , vector<vector<string>>&res , string s, int start) {
    if(s.length() == start) {
        res.push_back(cur);
        return;
    }

    for(int end = start + 1; end <= s.length; end++) {
        string substring = s.substr(start , end - start);
        if(validPalindrome(substring)) {
            current.push_back(substring);
            bactrack(current , res , s,end);
            current.pop_back();
        }
    }
}


vector<vector<string>>splitsPalindrome(string s) {
    vector<vector<string>>res;
    vector<string>cur;
    backtrack(cur,res,s,0);
    return res;
}


