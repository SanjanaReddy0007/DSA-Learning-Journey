
vector<int>singleNumberIII(vector<int>&numbers)
{
    int xorResult = 0;
    for(int num : numbers) {
        xorResult ^= num;
    }

    int rightMostBit = xorResult & -xorResult;
    int num1 = 0, num2 = 0;
    
    for(int num : numbers) {
      if((num & rightMostBit) == 0) {
        num1 ^= num;
      } else {
        num2 ^= num;
      }
   }
   
   if(num1 > num2) {
      int temp = num1;
      num2 = num1;
      num1 = temp;
   }
    
   return {num1, num2};
}


