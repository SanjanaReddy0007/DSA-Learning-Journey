
int longestSnapStreak(string s) {
    int n = s.size();
    int count = 0;
    int longest = 0;

    for(char c : s) {
        if(c == '1') {
            count++;
            longest = max(count , longest);
        } else {
            count = 0;
        }
    }

    return longest;
}


