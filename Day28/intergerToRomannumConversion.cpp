#include<bits/stdc++.h>
using namespace std;


string intoRoman(int num)
{
    stirng romanNum[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    
    string result = "";
    for(int i = 0; i < 13; i++)  {
        while(num >= values[i]) {
            result += romanNum[i];
            num -= values[i];
        }
    }

    return result;

}

//TC :- O(1) and SC :- O(1)
//the alog run constant for upto 13 nums fixed set-pair, for each the inner loop runs as long as the value fits in the remaining number...


