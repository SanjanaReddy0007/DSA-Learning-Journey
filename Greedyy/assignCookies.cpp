
int assignCookies(vector<int>&greed,vector<int>&sizes) {
    sort(greed.begin() , greed.end());
    sort(sizes.begin() , sizes.end());
     
    int i = 0 , j = 0;
    while(int i < greed.size() && j < sizes.size()) {
       if(sizes[i] >= greed[i]) {
          i++;
          j++;
       } else {
         j++;
       }
    }
    return i;
}

