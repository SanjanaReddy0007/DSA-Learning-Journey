
void helper(int i , string s) {
    if(i >= n / 2) {
        return true;
    }

    if(s[i] != s[n - i - 1]) {
        return false;
    }

   return helper(i + 1 , s);

}

void Palindrome(string s) {
    return helper(0 , s);
}

