#include<nits/stdc++.h>
using namespace std;

void compute(int a, int b, char op) {
     int result;
     switch (op) {
        case "+":
           result = a + b;
           break;
        case '-':
           result = a - b;
           break;
        case '*':
           result = a*b;
           break;
        default:
          result = a / b;
          break;
     }

     cout<<result<<" ";
}


int main() {
   int a,b;
   char op;
   cin>>a>>b>>op;
   compute(a,b,op);
   return 0;
}

//TC:- O(1) switch case and dictionary lookup of constant time so
//SC:- O(1) , no additional space required...


//or can perform direct method in O(1) tc and sc also O(1) no extra space is used.
if (op='+'):
   reuslt=a+b 
else if(op = '-'):
   result= a - b;

cout<<result<<endl;

