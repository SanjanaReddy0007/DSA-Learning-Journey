
int longestOddnum(string s)
{
   int n = s.size();
   for(int i = n - 1; i >= 0; i--) {
      if((s[i] - '0') % 2 != 0) {
          return s.substr(i + 1);
      }
   }

   return "";

}


