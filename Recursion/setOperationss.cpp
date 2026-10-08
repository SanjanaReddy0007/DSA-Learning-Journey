 void insert(set<int> &s,int x) {
        s.insert(x);
        
    }

    void print_contents(set<int> &s) {
        for(auto it=s.begin();it!=s.end();it++){
            cout<<*it<<" ";
        }
        
    }

    void erase(set<int> &s,int x) {
        s.erase(x);
        
    }

      int find(set<int> &s,int x) {

        if(s.find(x) != s.end()) {
            return 1;
        } else {
            return -1;
        }
        
    }
   
   
    int size(set<int> &s) {
        return s.size();
    }

    
