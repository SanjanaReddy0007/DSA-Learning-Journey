int decimalToBinary(int n) {
   string s = "";

   while(n != 0) {
      if(n % 2 == 0) {
        s += '0';
      } else {
        s += '1';
      }
   }
   
   reverse(s.begin() , s.end());
   return s;
}
//O(log2n)
//O(log2n)
