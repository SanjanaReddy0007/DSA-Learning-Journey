
int houseRobber(int arr[] , int n) {
    if(i == 0) return arr[0];
    if(i == 1) return max(arr[0] , arr[1]);
    
    int pick = arr[i] + f(i - 2 , arr);
    int non_pick = f(i - 1);

    return max(pick , non_pick);
}

