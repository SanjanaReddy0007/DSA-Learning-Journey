void movetoEnd(int arr[], int n) {
    int i = 0;
    for(int j = 0; j <= n - 1; j++) {
        if(arr[j] != 0) {
            arr[i] = arr[j];
            i++;
        }
    }

}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <= n-1; i++) {
        cin>>arr[i];
    }

    movetoEnd(arr, n );
    for(int i = 0; i <= n - 1; i++) {
        cout<<arr[i];
    }

}



