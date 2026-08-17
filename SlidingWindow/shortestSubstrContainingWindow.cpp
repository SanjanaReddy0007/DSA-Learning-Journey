#include <bits/stdc++.h>
using namespace std;

//using dp + subsequence means not adjacent but in must b in order....
string shortestSubstringContainingSequence(string source,string target)
{
    int n = source.size() , m = target.size();
    vector<int>f(m + 1, 10000000) , g(m + 1);
    f[0] = 0;

    int end = 0, length = n + 1;
    for(int i = 1; i <= n; i++) {
        g[0] = 0;
        for(int j = 1; j <= m; j++) {
            if(source[i - 1] == target[j - 1]) {
                g[j] = 1 + f[j - 1];
            } else {
                g[j] = 1 + f[j];
            }
        }

        f = g;
        if(f[m] < length) {
            length = f[m];
            end = i;
        }
    }

    return length > n ? """" : source.substr(end - length , length);
}


//O(m * n)
//O(m)
