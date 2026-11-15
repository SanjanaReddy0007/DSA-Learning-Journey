bool helper(int idx ,int count , string s) {
    if(count < 0) return false;
  
    if(indx == s.size()) {
        return count == 0;
    }

    if(s[i] == '(') {
       return  helper(indx + 1,count + 1, s);
    }

    if(s[i] == ')') {
        return helper(indx + 1, count - 1, s);
    }

    return helper(indx + 1, count + 1, s) || helper(indx + 1, count - 1, s) ||
      helper(indx + 1, count , s);

}

bool balancedhooks(string s) {
    return helper(0,0,s);
}

