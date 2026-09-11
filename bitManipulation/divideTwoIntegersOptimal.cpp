int divideTwoIntegres(int x, int y) {
     long long a = (long long) x;
     long long b = (long long) y;


     if(a == INT_MIN && b == -1) return INT_MAX;
     if(a == INT_MIN && b == 1) return INT_MIN;

     bool flag = (a > 0) == (b > 0);
     a = llabs(a) , b = llabs(b);

     long long temp = 0, ans = 0;
     for(int i = 31; i >= 0; i--) {
        if(temp + (b << i) <= a) {
            temp += (b << i);
            ans += (1 << i);
        }
     }

     if(!flag) {
        ans -= ans;
     }

     return ans;
}


