
int cornerRectngles(vector<vector<int>>&arr)
{
   int m = arr.size();
   int n = arr[0].size();
   int count = 0;

   if(m == 0) return 0;
   
   for(int r1 = 0; r1 < m; r1++) {
    for(int r2 = r1 + 1; r2 < m; r2++) {
        int count = 0;
        for(int c = 0; c < n; c++) {
            if(arr[c][r1] == 1 && arr[c][r2] == 1) {
                count++;
            }
        }

        count = count * (count - 1) / 2;
     }
   }

   return count;
}

