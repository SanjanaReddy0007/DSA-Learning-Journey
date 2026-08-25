//BRUTEEEEEEE O(K) 

int shiftOneByK(int arr[] , int k) {
    int n = arr.size();
    k = k%n; //for the optimization

    int temp[k];
    for(int i = 0; i <= k - 1; i++) {
        temp[i] = arr[i];
    }

    for(int i = k; i <= n - 1; i++) {
        arr[i - k] = arr[i];
    }

    for(int i = n - k; i <= n - 1; i++) {
        arr[i] = temp[i - (n - k)];
    }

}

//..OPTIMAL(double reverse) bcs if reversing smtg twice it comes to the original Position.. 
//reverse 0 to k - 1
//reverse k to n - 1
//reverse 0 to n - 1
//O(n) O(1)
int k = k % n;
reverse(arr, arr+k);
reverse(arr+k,arr+n);
reverse(arr,arr+n);

