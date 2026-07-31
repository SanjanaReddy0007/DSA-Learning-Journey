
int trapWater(vector<int>& arr)
{
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int left_max = 0;
    int water = 0;
    int right_max = 0;

    while(left <= right) {
        if(left_max <= right_max) {
            if(arr[left] >= left_max) {
                left_max = arr[left];
            } else {
                water += (left_max - arr[i]);
            }
            left++;
        } else {
            if(arr[right] >= right_max) {
                right_max = arr[right];
            } else {
                water += (right_max - arr[i]);
            }
        }
    }

    return water;
}


//TC : -O(n)
//SC : -O(1)

