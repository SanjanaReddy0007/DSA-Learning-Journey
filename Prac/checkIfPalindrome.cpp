
bool checkIfANumberIsPlaindrome(int n) {
    
   int n1 = n;
   int x = 0;

   while(n != 0) {
        int last = n % 10;
        x = x * 10 + last;
        n = n / 10;
   }

   if(x == n1) {
     return true;
   } else {
     return false;
   }

}


