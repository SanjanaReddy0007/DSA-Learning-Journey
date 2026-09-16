
vector<int>findConcatenatedPhase(vector<string>&words , string s)
{
    vector<int>result;
    
    if(s.empty() || words.empty()) {
        return result;
    }

    int wordLenght = word[0].length();
    int wordCount = words.size();
    int totalLen = wordLenght * wordCount;
    unordered_map<string, int>wordMap;

    for(const string &word : words) {
        wordMap[word]++;
    }

    for(int i = 0; i < s.length() - totalLen; i++) {
        unordered_map<string,int>seenWordss;
        int j = 0;

        while(j < wordCount) {
            string word = s.substr(i + j * wordLen , wordLen);
           
            if(wordMap.find(word) == wordMap.end()) {
                break;
            }

            seenWords[word]++;
            if(seenWords[word] > wordMap[word]) {
                break;
            }

            j++;
        }
        if(j == wordCount) {
           result.push_back(i);
        }
    }

    return result;
}


