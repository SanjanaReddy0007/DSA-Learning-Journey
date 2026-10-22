
int f(int n, vector<vector<int>>&points) {
    vector<int>priori(3);
    vector<int>cur(3);
    
    priori[0] = points[0][0];
    priori[1] = points[0][1];
    priori[2] = points[0][2];
    
    for(int i = 1; i <= n - 1; i++) {
        for(int j = 0; j <= 2; j++) {
            cur[j] = points[i][j] + max(priori[(j + 1) % 3] , priori[(j + 2) % 3]);
        }
        for(int j = 0; j <= 2; j++) {
            priori[j] = cur[j];
        }
    }
    
    int a = cur[0];
    int b = cur[1];
    int c = cur[2];
    return max(max(a,b) , c);
    
}


int main() {
  int n;
  cin>>n;
  vector<vector<int>>points(n,vector<int>(3));
  for(int i = 0; i < n; i++) {
      for(int j = 0; j < 3; j++) {
          cin>>points[i][j];
      }
  }
  cout<<f(n,points);
  return 0;
}





