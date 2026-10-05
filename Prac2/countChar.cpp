
int countCharacter(string s, char ch) {
    int n = s.size();

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == ch) {
            count++;
        }
    }

    return count;

}


