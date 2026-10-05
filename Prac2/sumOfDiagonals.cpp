
int sumOfDiagonals(int arr[][] , int n) {
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][n - i - 1];
    }

    cout<<sum1<<" "<<sum2<<endl;
    
}


