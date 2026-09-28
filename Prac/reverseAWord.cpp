
string reverseAWord(string s)
{
    stringstream s(ss);
    vector<string>words;
    string word ="";

    while(ss >> word) {
        words.push_back(ss);
    }

    int n = words.size();
    string ans = "";

    for(int i = n - 1; i >= 0; i--) {
        ans += words[i] + ' ';
    }

    ans.pop_back();
    return ans;

}

