
 string removeDuplicates(string s, int k) {
        bool found;
        do {
            found = false;
            int n = s.length();
            for (int i = 0; i <= n - k; ++i) {
                if (count(s.begin() + i, s.begin() + i + k, s[i]) == k) {
                    s = s.substr(0, i) + s.substr(i + k);
                    found = true;
                    break;
                }
            }
        } while (found);
        return s;
    }

