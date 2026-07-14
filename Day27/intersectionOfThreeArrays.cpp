#include<bits/stdc++.h>
using namespace std;

//using THREEE POINTER APPROACHHHHHH!!!!!!!!!!!!!!!!!!!!!!!!!

vector<int>IntersectionOThreeArrays(vector<int>a,vector<int>b,vector<int>c) {
    
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int>ans;

    while(i < a.size() && j < b.size() && k < c.size()) {
        if(a[i] == b[j] && b[j]==c[k]) {
            ans.push_back(a[i]);
            i++;
            j++;
            k++;
        } else {
            int currentmin = min(a[i],min(b[j],c[k]));
            if(a[i] == currentmin) {
                i++;
            }

            if(b[j] == currentmin) {
                j++;
            }

            if(c[k] == currentmin) {
                k++;
            }
        }
    }
    return ans;
}


//Tc:- O(a+b+c)
//SC :- O(min(a,b,c))


