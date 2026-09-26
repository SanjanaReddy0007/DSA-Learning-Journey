
int maxDiffInBookStack(vetoR<int>&pages, int k)
{
   int n = pages.size();
   vector<int>pairPaes(n - 1, 0);

   for(int i = 0; i < n - 1; i++) {
      pairPages[i] = pages[i] + pages[i + 1];
   }

   sort(pages.begin() , pages.end());
   long ans = 0;

   for(int i = 0; i < k - 1; i++) {
      ans += pairPages[n - 2 - i] - pairPages[i];
   }

   return ans;
}


