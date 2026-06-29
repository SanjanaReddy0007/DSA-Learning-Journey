#include<bits/stdc++.h>
using namespace std;



string smallestConcaenatednum(vector<int>&values) {
     vector<string>string_vals;
     
     for(int num : values) {
        string_vals.push_back(to_string(num));
     }

     sort(string_vals.begin() , string_vals.end(),[](string &a,string&b){
        return a+b < b+a;
     });
      
     
     string result ="";
     for(const string &s :string_vals) {
        result += s;
     }

     if(result == '0') {
        return '0';
     }


     return result;


}



