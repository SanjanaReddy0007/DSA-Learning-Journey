//brute
int singleElemnt(vector<int>&arr)
{
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 1) return arr[i];
    }

    return -1;
}


//
int singleElemnt(vector<int>&arr)
{
    int n = arr.size();

   unordered_map<int,int>mp;
   for(int i = 0; i < n; i++) {
      mp[arr[i]]++;
   }

   for(int k : mp) {
      if(k.second == 1) {
        return k.first;
      }
   }

   return -1;

}

//XOR
int xor1 = 0;
for(int i = 0; i < n; i++) {
    xor1 = xor1 ^ arr[i];
}

return xor1;
