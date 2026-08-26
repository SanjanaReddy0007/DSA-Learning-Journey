string toRoman(int num) {
   string romanSymbols = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
   int numbers[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

   string result = "";
   for(int i = 0; i < 13; i++) {
     while(num >= numbers[i]) {
        result += romanSymbols[i];
        num -= numbers[i];
     }
   }
   
   return result;
}

