
class SmartBookshelf {
    int cap ,size = 0, minFreq= 0;
    unordered_map<int,int>keyToVal;
    unordered_map<int, int>keyToFreq;
    unordered_map<int,list<int>>freqToKeys;
    unordered_map<int,list<int>::iterator>keyIter;
    
public:
    SmartBookshelf(int shelfSize) : cap(shelfSize){ }
    
    void touch(int key) {
        int f = keyToFreq[key]; //erases the current freq and remove from the curr freq group..
        freqToKeys[f].erase(keyIter[key]);
        if(freqToKeys[f].empty()) {
            freqToKeys.erase(f); //if empty remove from the group
            if(minFreq == f) minFreq = f + 1;
        }
        int nf = f + 1; //increases the freq
        keyToFreq[key] = nf;
        freqToKeys[nf].push_back(key); //push to the group
        keyIter[key] = prev(freqToKeys[nf].end()); 
    }
    
    //updates the content on the book if presnt else returns as the -1...
    int readBook(int bookID) {
        if(cap == 0 || keyToVal.find(bookID) == keyToVal.end()) 
            return -1;
        touch(bookID); //to increase the freq of the book if exists goes to the touch block
        return keyToVal[bookID]; //retuns the book id which is having that the accesed for the read based on increases the popularityyy
        }
    
    
    //updates the content of the book if already exists, else inserts the new into the shelf...
    void placeBook(int bookID, int bookContent) {
        if(cap == 0) return ;
        
        //if the required book is present increases the frequency of it...
        if(keyToVal.find(bookID) != keyToVal.end()) {
            keyToVal[bookID] = bookContent;
            touch(bookID);
            return;
        }
        
        //if its crosses it's size
        if(size == cap) {
            int evict = freqToKeys[minFreq].front();
            freqToKeys[minFreq].pop_front();
            if(freqToKeys[minFreq].empty()) 
                freqToKeys.erase(minFreq);
                //erase from the all groupssss
            keyToVal.erase(evict);
            keyToFreq.erase(evict);
            keyIter.erase(evict);
            size--;
        }
        
        //after removing baove adds tjhe new ones with all 
        keyToVal[bookID] = bookContent;
        keyToFreq[bookID] = 1;
        freqToKeys[1].push_back(bookID);
        keyIter[bookID] = prev(freqToKeys[1].end());
        minFreq = 1;
        size++;
    }

};




