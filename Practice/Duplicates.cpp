void DuplicateZeroes(vector<int>&arr) {
  int n = arr.size();
  vector<int>newarr;

  for(int i = 0; i < n; i++) {
    if(arr[i] == 0) {
        newarr.push_back(0);
        newarr.push_back(0);
    }else {
        newarr.push_back(arr[i]);
    }
  }

  for(int i = 0; i < n; i++) {
    arr[i] = newarr[i];
  }
}

//optimal in-place but tc is O(n^2) due to mid adding repeated in the middle ,  shift sc:-O(1)
void Duplicates(vector<int>&arr)
{
   int n = arr.size();
   int i = 0;

   while(i < n) {
     arr.insert(arr.begin() + i + 1, 0);
     arr.pop_back();
     i++;
   }

   i++;
}


