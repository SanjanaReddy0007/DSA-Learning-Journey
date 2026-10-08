
void Backtrack(string current, int  open, int close, int m, vector<vector<string>>&res) {

    if(current == 2*m) {
        res.push_back(current);
        retrun;
    }

    if(open < m) {
        current.push_back("[");
        Backtrack(current, open + 1, close, m,res);
        current.pop_back();
    }

    if(close < open) {
        current.push_back("]");
        Backtrack(current, open, close + 1, m ,res);
        current.pop_back();
    }

}


vector<string>GenerateBrackets(int m) {
    string current = "";
    vector<vector<int>>res;
    Backtrack(current, 0, 0, m,res);
    return res;
}


