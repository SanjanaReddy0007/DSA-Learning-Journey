
int helper(int start, int end, int arr[]) {
    
    int p2 = 0;
    int p1 = 0;

    for(int i = start; i <= end; i++) {
        int temp = p1;
        p1 = max(p1 , arr[i] + p2);
        p2 = temp;
    }

    return p1;
}


int houseRobber(int arr[] , int n) {
    if(n == 0) return arr[0];
    return max((helper(0 , n - 2, arr) , helper(1 , n - 1, arr)));
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<houseRobber(arr,n);
    return 0;
}

