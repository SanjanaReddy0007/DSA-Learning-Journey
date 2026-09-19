int power(int k, int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans = ans * k;
    }

    return ans;
}

int findNthrootOfM(int n , int m)
{
    for(int k = 1; k < m; k++) {
        int x = power(k,n);
        if(x == m) {
            return k;
        } else if(x > m) {
            return -1;
        }

        return 0;
    }
}



