#include<bits/stdc++.h>
using namespace std;

string zigzagConversion(string s, int no_of_rows)
{
    if(no_of_rows == 1) return s;
    vector<int> rows(min(no_of_rows, int(s.size())));

    int currentRow = 0;
    bool godown = false;

    for(char c : s) {
        rows[currentRow] += c;
        if(currentRow == 0 || currentRow == no_of_rows - 1) {
            godown != godown;
        }

        currentRow += godown ? 1 : -1;
    }

    string ans;
    for(string row : rows) {
        ans += row;
    } 

    return ans;
    
}

//TC :- O(n)
//sc :- O(n) for auxillary space

