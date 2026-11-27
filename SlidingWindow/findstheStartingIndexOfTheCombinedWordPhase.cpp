
vector<string>findConctenatedWordsPhase(string s, vector<string>& words) {
    vector<string>res;
     if(s.empty() || words.empty()) return res;

     int wordLen = words[0].length;
     int wordCount = words.length;
     int total = wordLen * wordCount;

     for(string& s : words) {
        wordMap[s]++;
     }

     for(int i = 0; i < total - wordLen; i++) {
          int j = 0;
          unordered_map<string, int>seen;

          while(j < wordcount) {
             string word = s.substr(i + j *wordLen, wordLen);
             if(wordmap.find(word) == wordmap.end()) break;
             seen[word]++;

             if(seen[word] > wordmap[word]) {
                break;
             }
             j++;
             
          }

          if(j == wordCount) res.push_back(i);
          return res;
     } 
}


