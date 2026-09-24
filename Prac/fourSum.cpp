
int fourSum(vector<int>&arr, int target)
{
    vector<vector<int>>ans;
    sort(arr.begin(), arr.end());
    int n = arr.size();


    for(int i = 0; i < n; i++) {
        if(i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        for(int j = i + 1; j < n; j++) {
            if(j > i + 1 && arr[j] == arr[j - 1]) {
                continue;
            }

            int left = j + 1 , rgt = n - 1;
            while(left <= rgt) {
                if(left > j + 1 && arr[left] == arr[left - 2]) {
                    left++;
                    continue;
                }

                long long sum = arr[left] + arr[rgt];
                long long x = target;
                x -= arr[i];
                x -= arr[j];
                if(sum == x) {
                    vactor<int>temp={arr[i],arr[j],arr[left],arr[rgt]};
                    ans.push_back(temp);
                    left++;
                    rgt--;
                } else if(sum < x) {
                    left++;
                } else{
                    rgt--;
                }
            } 
        }

        return ans;

}


