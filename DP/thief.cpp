
int f(int arr[] , int n) {
   int p2 = arr[0];
   int p1 = max(arr[0] , arr[1]);
   if(n == 1) return p1;
   
   for(int i = 2; i <= n - 1; i++) {
       int pick = arr[i] + p2;
       int non_pick = p1;
       int cur = max(pick , non_pick);
       p2 = p1;
       p1 = cur;
   }
   return p1;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++) {
      cin>>arr[i];
  }
  cout<<f(arr, n  );
  return 0;
}



