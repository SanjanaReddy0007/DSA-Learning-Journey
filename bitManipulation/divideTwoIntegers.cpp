int divideTwoIntegers(int x, int y) {

   long long a = (long long)x;
   long long b = (long long)y;

   if(a == INT_MIN && b = -1) return INT_MAX;
   if(a == INT_MIN && b = 1) return INT_MIN;

   bool flag = (a > 0) == (b > 0);

   a = llabs(a);
   b = llabs(b);

   while(a >= b) {
      a -= b;
      count++;
   }

   if(!flag) {
      count -= count;
   }

   return (int)count;

}


