int majorityelementIIOptimal(vector<int>&arr) {
   int n = arr.size();

   int majority1 = 0, makority2 = 0;
   int leader1 =  INT_MIN, leader2 =  INT_MIN;

   for(int i = 0; i < n; i++) {
      if(arr[i] != leader2 && majority1 == 0) {
         leader1 = arr[i];
         majority1++;
      } else if(arr[i] != leader1 && majority == 0) {
        leader2 = arr[i];
        majority2++;
      } else if(arr[i] == leader1) {
         majority1++;
      } else {
        majority2++;
      }
   }

   int count1 = 0, count2 = 0;
   for(int i = 0; i < n; i++) {
     if(arr[i] == leader1) count1++;
     if(arr[i] == leader2) count2++;
   }

   vector<int>ans;
   if(count1 > n/3)  ans.push_back(leader1);
   if(count2 > n/3)  ans.push_back(leader2);

   return ans;

}


