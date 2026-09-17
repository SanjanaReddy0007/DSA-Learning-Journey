
vector<int>FindMissedAndRepeated(vector<int>&arr)
{
    int n = arr.size();
    vector<bool>checked(n + 1, false);
    int repeated = -1, missed = -1;

    for(int i = 0; i < n; i++) {
        if(checked(arr[i])) {
           repeated = arr[i];
        } else {
            checked[arr[i]] = true;
        }
    }

    for(int i = 1; i <= n; i++) {
        if(!checked(i)) {
           missed = i;
           break;
        }
    }

    return {checked, missed};

}

