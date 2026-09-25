
long long candyWithMaxSweetness(vector<int>&candies, int maxSeet)
{
   int n = candies.size();
   long long count = 0;
   long long product = 1;

   if(maxSweet <= 1) retrun 0;
   int j = 0;

   for(int i = 0; i < n; i++) {
       product *= candies[i];

       while(product >= maxSweet && j <= i) {
          product /= candies[j];
          j++;
       }

       count += j - i + 1;
   }

   return count;
}


