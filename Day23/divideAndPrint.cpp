#include<bits/stdc++.h>
using namespace std;

void divideAndPrint(long long num, int divisor) {
    cout<<fixed<<setprecision(2) << (double)num / divisor;
}


int main() {
    long long num;
    int divisor;
    divideAndPrint(num,divisor);
    return 0;
}





//Another type TC:- O(1) 


double divideAndPrint(long long num, int divisor) {
    return (double) num / divisor;
}



int main() {
   long long num;
   int divisor;

  cin>>num>>divisor;
  solution sol;

  double result = sol.divideAndPrint(num, divisor);
cout<<fixed<<setprecision(2)<<result<<endl;

}

//TC:- Division operation and printing takes a time complexity of O(1)
//SC :- the function uses constant amount of spaces for result and input values............

