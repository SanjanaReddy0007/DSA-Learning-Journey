
void multiplicateMiddleElement(int arr[] , int n, int k) {

    int mid = 0;

    if(n % 2 == 0) {
        mid = n / 2 - 1;
    } else {
        mid = n / 2;
    }

    arr[mid] *= k;

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
}


