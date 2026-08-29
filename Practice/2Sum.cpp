int twoSum(vector<int>&arr , int k){
   int n = arr.size();
   for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        if(arr[i] + arr[j] == k) {
            retrun {i,j};
        }
    }
   }

   return -1;
}


//OPTIMAL
int n = arr.size();
vector<pair<int,int>>indexPair;

for(int i = 0; i<n;i++) {
    indexPair.push_back({arr[i],i});
}

sort(indexArr.begin() , indexArr.end());
int i = 0, j = n - 1;

while(j < n) {
    int sum = indexArr[i].first + indexArr[j].first;
    if(sum == k) {
        return {indexArr[i].second, indexArr[j].second};
    }

    if(sum < k) {
        i++;
    } else {
        j++;
    }

    return {-1,-1};

}
