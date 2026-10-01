
int trashRmove(vector<int>&arr, int c, int n)
{
    sort(arr.rbegin() , arr.rend());
    int saved = 0;

 for(int x : arr) {
    int cost = 1LL * x (1LL << saved);

    if(cost <= c) {
        saved++;
    }
 }

 return n - saved;

}

