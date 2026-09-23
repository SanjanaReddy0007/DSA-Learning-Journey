
vector<int>majorityEl(vecor<int>&arr)
{
    int n = arr.size();
    int m1 = INT_MIN , m2 = INT_MIN;
    int L1 = 0, L2 = 0;

  for(int i = 0; i < n; i++) {
     if(arr[i] != L2 && m1 == 0) {
         m1++:
         L1 = arr[i];
     } else if(arr[i] != L1 && m2 == 0) {
        m2++;
        L2 = arr[i];
     } else if(arr[i] == L1) {
        m1++;
     } else if(arr[i] == L2) {
        m2++;
     } else {
        m1--;
        m2--;
     }
  }

    int count1 = 0, count2 = 0;
    vector<int>ans;

    for(int i = 0; i < n; i++) {
        if(arr[i] == L1) count++;
        if(arr[i] == L2) count2++;
    }

    if(count1 > n / 3) ans.push_back(L1);
    if(count2 > n / 3) ans.push_back(L2);
    return ans;
    
}


