#include<bits/stdc++.h>
using namespace std;


string arrangeSmallConcatinationValues(vector<int> &values) {
    vector<string>string_result;
    
    for(int num : values) {
       string_result.push_back(to_string(num));
    }

    sort(string_result.begin() , string_result.end(),[](string&a,string&b) {
        return a + b < b + a;
    });


    string result = "";
    for(string &s : string_result) {
        result += s;
    }


    if(result[0] == '0') {
        return '0';
    }

    return result;
}






//TC :- O(n * mlogn) m is the avg number of digits in the total numbers...
//SC :- O(n * m) n is the number of elements, m is avg number of digits in each element ....




