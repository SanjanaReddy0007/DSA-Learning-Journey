void swapTeoNums (int a, int b) {
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
}

//TC :- O(1) both
