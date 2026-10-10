
 int findSqrtOfN(int n){
        //Write your code here...
        int ans = -1;
        int low = 0, high = n - 1;
        
        while(low <= high) {
            long long mid = (low + high) / 2;
            if(mid*mid <= n) {
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }


