#include<bits/stdc++.h>
using namespace std;

vector<long long> polynomialCalculation(vector<int>& firstCoeff , vector<int>& secondCoeff) {
    int n = firstCoeff.size();
    int m= secondCoeff.size();
    
    vector<int>result(n+m-1,0);
    for(int i = 0;i < n; i++) {
        for(int j = 0; j < m; j++) {
            result[i+j] = firstCoeff[i] * secondCoeff[j];
        }
    }

   return result;

}


#TC:- O(m*n)
## here polynomial multiplication means every coefficient of i multiply with j ... 
at the postion result[i+j] its stores at that the position.....




