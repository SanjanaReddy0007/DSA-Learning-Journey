
int power(int mid, int n, int m) {
    int ans = 1;

    for(int k = 0; k < n; k++) {
        ans = ans * mid;

        if(ans > m) {
            return 1;
        }
    }

    if(ans == m) {
      return 0;
    } else {
        return -1;
    }

}

int findTherootOfNToM(int n , int m)
{
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        int x = power(mid,n,m);
        if(x == 0) {
            return mid;
        }

        if(x == 1) {
            high = mid - 1;
        } else {
            low = mid - 1;
        }
    }

}
