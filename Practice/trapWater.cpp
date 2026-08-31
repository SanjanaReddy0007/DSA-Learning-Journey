int trapRainWater(vector<int>&arr) {
   
    int n = arr.size();
    int left = 0, right = n - 1;
    int letMax = 0, rightMax = 0;

    while(left <= right) {
        if(leftMax <= rightMax) {
            if(arr[left] >= leftMax) {
                leftMax = arr[left];
            } else {
                water += (leftMax - arr[left]);
            }
            left++;
        } else {
            if(arr[right] >= rightMax) {
                rightMax = arr[right];
            } else {
                water += (rightMax - arr[right]);
            }
            right--;
        }
    }

    return water;
}

