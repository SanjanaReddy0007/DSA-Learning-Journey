vector<int>missedAndRepeatedNumbers(vector<int>&arr)
{
    int n = arr.size();
    vector<bool>check(n + 1 ,false);
     int missed = -1, repeated = -1;

    for(int i = 0; i < n; i++) {
       if(check[i]) {
          repeated = arr[i];
       } else {
          checked = arr[i];
       }
    }

    for(int i = 1; i <= n; i++) {
        if(!checked(i)) {
            missed = i;
            break;
        }
    }

    return {repeated , missed};

}

