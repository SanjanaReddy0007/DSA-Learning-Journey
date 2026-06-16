#intresting sum is a num which is less than the previous num x > (x + 1)
i.e number which is ends with 9 ex:- 9 > 10 bcs 1 + 0 = 1 so...


#include<birs/stdc++.h>
using namespace std;


int intrestingNums(int N) {
    return (N / 10) + (N % 10 == 9 ? 1 : 0);
}



//O(n) bcs it is division and modulo in one operation 



