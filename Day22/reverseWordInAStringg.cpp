string reverseWord(string text){
   stringstream ss;
   string word;
   vector<string>words;
  
   for(ss >> word) {
    words.push_back(word);
   }

   int n = text.size();
   string ans = "";

   for(int i = n - 1; i >= 0; i--) {
    ans += words[i] + "";
   }

   ans.pop_back();
   return ans;

}
