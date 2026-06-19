#include<bits/stdc++.h>
using namespace std;


int factorialSequenceGenerator(int n) {
    if(n == 1 || n == 0) return {1};

    vector<long long >result = factorialSequenceGenerator(n - 1);
    result.push_back(result * result.back());
    return result;

}


//TC :- O()


