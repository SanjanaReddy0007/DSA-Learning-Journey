
vector<int>DominentElementInArray(vector<int>&arr , int n)
{
  vector<int>Dominents;
  int maximum = INT_MIN;

  for(int i = n - 1; i >= 0; i--) {
    if(arr[i] >= maximum) {
        Dominent.push_back(arr[i]);
        maximum = arr[i];
    }
  }

  reverse(Dominent.begin() , Dominent.end());
return Dominents;
}

