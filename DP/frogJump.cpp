
int frogJump(int n,vector<int>height) {
    if(n == 0) return 0;
    if(n == 1) return abs(height[1] - height[0]);
    
    int prior2 = 0;
    int prior1 = abs(height[1] - height[0]);
    int cur;
    
    for(int i = 2; i <= n; i++) {
        int s1 = abs(height[i] - height[i - 1]) + prior1;
        int s2 = abs(height[i] - height[i - 2]) + prior2;
        cur = min(s1 ,s2);
        prior2 = prior1;
        prior1 = cur;
    }
    return cur;
}

int main() {
  int n;
  cin>>n;
  vector<int>height(n);
  for(int i = 0; i < n; i++) {
      cin>>h

