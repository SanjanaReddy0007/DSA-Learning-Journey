

int maxWater(vector<int>& levels) {
   int n = levels.size();
   int maxwater = 0;

   for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        int water = (j - i) * min(level[i],level[j]);
        maxwater = max(water , maxwater);
    }
   }

  return maxwater;
}

//O(n^2) SC :- O(1)


//OPTIMALLLLLL
int maxwater(vector<int>& levels) {
    int n = levels.size();
    int i = 0;
    int j = n - 1;
    int maxwater = 0;

    while(i < j) {
        int water = (j - i) * min(levl[i] , level[j]);
        maxwater = max(water , maxwater);
        
        if(level[i] < level[j]) {
            i++;
        } else {
            j--;
        }
    }

    return maxwater;
}

//TC : -O(n)
//SC : -O(1)

