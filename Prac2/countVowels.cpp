
int countVowels(atring s) {
    int n = s.size();

    int vowel = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
             vowel++;
        }
    }

    return vowel;

}


