#include<bits/stdc++.h>
using namespace std;

void computeResult(int num1, int num2) {
    cout<<fixed<<setprecision(2)<<num1 * num2<<endl;

    if(num2 != 0) {
        cout<<fixed<<setprecision(2)<<num1 / num2<<endl;
    } else {
        cout<<"Undefined"<<endl;
    }

}


int main() {
  float num1,num2;
  cin>>num1>>num2;
  computeResult(num1,num2);
  return 0;
} 


