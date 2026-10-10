

vector<int>findStartingIndexOffirstWord(vector<string>&words,string s)
{
    unordered_map<string,int>wordmap;
    int wordCount = words.size();
    int wordLen = word[0].size();
    int total = wordLen * wordCount;

    int n = s.size();
     vector<int>ans;

     for(auto s : words) {
        wordmap[s]++;
     }

     for(int i = 0; i < s.length() - total; i++){
        unordered_map<string,int>seenMap;
        int j = 0;

        while(j < wordcount) {
            string word = s.substr(i + j * wordLen,wordLen);
            if(wordmap.find(word) == wordmap.end()) {
                break;
            }

            seenword[word]++;
            j++;
        }

        if(j == wordcount) {
            result.push_back(i);
        }
     }

     return result;
    

}

