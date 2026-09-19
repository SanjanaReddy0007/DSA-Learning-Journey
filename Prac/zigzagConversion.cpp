
string zigzagconversion(int num_rows, string s) {
    int n = num_rows.size();

    if(num_rows == 1) return s;
    bool isDown = false;
    int curRow = 0;

    vector<string>rows(min(num_rows , (int)s.size()));
    for(char c : s) {
        rows[curRow] += c;
        if(curRow == 0 || curRow = num_rows - 1) {
            isDown = !isDown;
        }

        curRow += isDown ? 1 : -1;
    }

        string ans = "";
        for(string row : rows) {
            ans += row;
        }

  return ans;

}

