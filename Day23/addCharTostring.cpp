#include<bits/stdc++.h>
suing namespace std;

//Direct Concatenation
string addchar(string s,char c) {
    return c + s + c;
}


int main() {
    char c;
    string s;
    cin>>c;
    cin.ignore();

    solution sol;
    string result = sol.addchar(c,s);
    cout<<result<<endl;
    return 0;
}


//O(n) TC this is direct concatination method to add like this 
//O(n) SC for storing length + 2




//In-place Modification


void addchar(char c, string &s) {
   s.insert(s.begin,c); //adds c at beginining od the s
   s.push_back(c);
   cout<<s<<" ";
}


int main() {
    char c;
    string s;
    cin.ignore();
    getline(cin,s);
    addChar(c,s);
    return 0;
}


//TC:- O(n) insertion at begining takes this tc, all chars shifts right ,,,, appending at the end takes O(1) 
//SC:- O(1) bcs it is in c++ for pass by refernece 



