
string sortCharByFreq(string s)
{
    int n = s.size();
    vector<pair<int,char>>m(123,{0,0});

    for(auto ch : s) {
       m[ch] = {m[ch].first + 1, ch};
    }

    sort(m.begin() , m.end(), greater<pair<int,char>>());
    string ans = "";

    for(int i = 0; i < 123; i++) {
       ans.append(string(m[i].first , m[i].second));
    }

    return ans;
}


