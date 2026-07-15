#include<bits/stdc++.h>
using namespace std;


vector<int>magnitudeValues(vector<int>&values)
{
    int n = values.size();
    
    sort(values.begin() , values.end(),[](int a,int b) {
        return abs(a) < abs(b)
    });

    return values;

}


//TC :- O(nlogn)
//SC :- O(1)
