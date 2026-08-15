#include<bits/stdc++.h>
using namespace std;

vector<int>findStartingIndices(string s, vector<string>& words)
{
    vector<int>result();
    if(s.empty() || words.empty()) {
        return result;
    }

    int wordLen = word[0].length() , wordCount = words.size();
    int total = wordLen * wordcount;
    unordered_map<string,int>wordmap;

    for(const string & word : words) {
        wordmap[word]++;
    }

    for(int i=0; i < s.size() - total; i++) {
         unordred_map<string,int>seenMap;
         int j = 0;//traverse word by word not char by char

         while(j < wordcount) {
           string word = s.substr(i + j * wordLen,wordLen);
           
           if(wordmap.find(word) == wordmap.end()) {
              break;
           }
           
            seenMap[word]++;
            if(seenMap(words) > wordmap(word)) {
                break;
            }
            
         j++;
         }


         if(j == wordcount) result.push_back(i);
    }

    return result;

}
//TC :- O(m*n*k)
//SC :- O(k)
