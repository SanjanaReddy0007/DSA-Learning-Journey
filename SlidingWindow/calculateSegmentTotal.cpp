#include<bits/stdc++.h>
using namespace std;

int calculateTotlaSegment(vector<int>&total)
{
    int n = total.size();
    int mod = 1e9 + 7;
    long long res = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(isValid(total,i,j)) {
                for(int k=i;k<=j;k++) {
                    res = (res + total[k]) % mod;
                }
            }
        }
    }
    return (int)res;
}


bool isValid(vector<int>&total, int l,int r)
{
    if(l == r) return true;
    int diff = total[l] - total[r];
    if(abs(diff) != 1 )return false;
    for(int i=l+1; i < n; i++) {
        if(total[i + 1] - total[i] != diff) return false;
    }
    return true;

}


//O(n^3)
