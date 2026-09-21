
int majorityel(vector<int>&arr)
{
    int n = arr.size();
    int leader = arr[0];
    int majority = 1;

    for(int i = 0;i < n; i++) {
        if(majority == 0) {
            leader = arr[i];
            majority++;
        } else {
            if(leader == arr[i]) {
                majority++;
            } else {
                majority--;
            }
        }
    }

    return leader;

}


