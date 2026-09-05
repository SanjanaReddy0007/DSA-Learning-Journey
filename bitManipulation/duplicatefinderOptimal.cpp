
int duplicateElement(vector<int>&num)
{
   int n = num.size();
   unordered_map<int,int>m;

   for(int i = 0; i < n; i++) {
      if(m[arr[i]] ++) {
         return arr[i];
      }
   }

   return -1;
}

