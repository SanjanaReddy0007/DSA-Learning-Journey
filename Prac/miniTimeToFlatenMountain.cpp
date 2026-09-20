
int canfind(vector<int>&wt, int mid, int h) {
    int total = 0;

    for(auto w : wt) {
        int low = 0, high = 1000000;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(w * mid * (mid + 1) / 2 <= mid) {
                low = mid + 1;
            }  else {
                high = mid - 1;
            }
        }

        total += right;
        if(total >= h) rturn true;
    }

    return total >= h;

}



int miniTimetoFlattenMountin(vector<int>&wt, int h)
{
    int low = 0,high = 1000000;
    int ans = 0;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(canFind(mid,h,wt)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;

}


