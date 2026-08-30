
vector<int>DominentElementInArray(vector<int>&arr , int n)
{
  vector<int>Dominwnts;

  for(int i = 0; i < n; i++) {
     isDominent = false;
     for(int j = i + 1; j < n; j++) {
        if(arr[i] > arrj ) {
            isDominent= true;
            Dominent.push_back(arr[i]);
        }
     }
  }

  return Dominent;

}

