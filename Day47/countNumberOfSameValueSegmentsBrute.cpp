#include<bits/stdc++.h>
using namespace std;

int countSegments(HugeArray* data)
{
    int n = data->length();
    if(n == 0) return 0;
    int blocks = 1;

    for(long long i = 0; i < n; i++) {
        if(data->valueAt(i) == data->valueAt(i + 1)) {
            blocks++;
        }
    }

    return blocks;
}

//O(n)
//O(1)

