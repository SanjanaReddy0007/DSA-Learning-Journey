int missingNum(vector<int>&arr) {
   int sum1 = 0;
   int sum2 = 0;
   for(int i = 0; i < n-1; i++) {
     sum1 += arr[i];
   }

   sum2 += (n * (n + 1)) / 2;
   return sum2 - sum1;
}

//XOR usingg
int xor1 = 0;
int xor2 = 0;
for(int i = 0; i < n - 1; i++) {
    xor1 = xor1 ^ arr[i];
    xor2 = xor2 ^ arr[ i + 1];
}

return xor1 ^ xor2 ^ n;

