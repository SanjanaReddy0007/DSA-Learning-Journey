string zigzagConversion(string s, int num_of_rows) {
   if(num_of_rows == 1) return s;

   vector<string>rows(min(num_of_rows,int(s.size())));
   int cuurentrow = 0; bool isDown = false;
   
   for(char c : s) {
    rows[currentrow] += c;
   if(currentrow = 0 || no_of_rows - 1) {
      isDown = !isDown;
   }

   currentrow += isDown ? 1 : -1;
}

string ans = "";
for(string row : rows) {
    ans += row;
}

return ans;

}

