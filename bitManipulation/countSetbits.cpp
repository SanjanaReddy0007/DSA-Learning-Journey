int countSetBits(int n) {
   int count = 0;

   while(n != 0) {
    if((n & 1) == 1) {
      count++;
    }
     n = n >> 1;
   }

   return count;
}

//TC :- O(log2n)
//SC :- O(1)

