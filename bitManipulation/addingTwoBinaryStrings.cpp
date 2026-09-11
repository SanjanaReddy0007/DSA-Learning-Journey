
string addTwoBinarystrings(string s1 , string s2) {
   
    int i = s1.length() - 1, j = s2.length() - 1;
    int carry = 0;
    string ans = "";

    while(i >= 0 || j >= 0) {
        int sum = 0;

        if(i >= 0) {
            sum += s1[i] - '0';
            i--;
        }

        if(j >= 0) {
            sum += s2[j] - '0';
            j--;
        }

        ans = char((sum & 1) + '0');
        carry = sum >> 1;
    }

        if(carry) {
            ans = '1' + ans;
        }

        return ans;
}

//TC :- O(max(m , n))
//SC :- O(max(m,n))

