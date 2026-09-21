
int buySellStok(vector<int>&arr)
 {
    int aheadBuy = 0;
    int ahedNotBuy = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        int curNotBuy = max(arr[i] + aheadBuy , aheadNotBuy);
        int currBuy = max(-arr[i] + aheadNotBuy , aheadBuy);
        aheadBuy = curBuy;
        aheadNotBuy = curNotBuy;
    }

    return aheadBuy;
    
 }

