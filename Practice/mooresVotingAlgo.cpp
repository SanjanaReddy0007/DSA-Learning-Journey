int mooresVotingAlgorithm(vector<int>&arr) {
  int n = arr.size();

  int leader = arr[0];
  int majority = 0;

  for(int i = 1; i < n; i++) {
    if(leader == arr[i]) {
        majority++;
   } else if(majority == 0) {
      leader = arr[i];
      majority++;
   } else {
    majority--;
   }
  }
  return leader;
}

