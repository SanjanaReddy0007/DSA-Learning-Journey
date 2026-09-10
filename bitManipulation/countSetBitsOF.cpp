
int helper(int num)
{
    int count = 0;
    while(num != 0) {
        count++;
        num = num & (num - 1);
    }
    return count;
}

int countSetBits(int num)
{
   vector<int>ans(n + 1);
   for(int i = 0; i < num.size(); i++) {
       ans[i] = helper(i);
   }
   
   return ans;
}


