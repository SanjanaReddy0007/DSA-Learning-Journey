bool vlaidAnagram(string s1,string s2) {
   
    if(s1.length != s2.length) return false;

    unordered_map<int,char>CountS;
    unordered_map<int,char>CountT;
    for(int i = 0; i < s1.length; s1++) {
        countS[s1[i]]++;
        countT[s2[i]]++;
    } 

    return CountS == CountT;

}


