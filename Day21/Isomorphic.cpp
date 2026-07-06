class solution {
public:
     bool helper(string s1,string s2){
         map<char,char>m;
         if(s1.size() != s2.size()) return false;
         
         int n=s1.size();
         for(int i=0;i<n;i++){
             if(m.find(s1[i]) == m.end()) //i.e means not mapped yet equals to -1
                 m[s1[i]]=s2[i];
             else if(m[s1[i]] != s2[i])
                 return false;
             }
             return true;
     }
     
    
    bool isomorphic(string s1, string s2) {
        //Write your code here...
        return helper(s1,s2) && helper(s2,s1);
    } 
};



