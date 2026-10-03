
int checkParity(string s) {
    int n = s.size();
    int right = (s[ n - 1] - '0') % 2;

    for(int i = 0; i < n - 1; i++) {
        int left = (s[i] - '0') % 2;

        if(left == right) {
            return "YESSSSS";
        } else {
            return "No";
        }
    }

}

