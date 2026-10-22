
int unique(int i,int j) {
    if(i == 0 || j == 0) {
        return 1;
    }
    int right = unique(i,j-1);
    int down = unique(i - 1,j);
    return right + down;
}

int main() {
  int m,n;
  cin>>m>>n;
  cout<<unique(m-1,n-1);
  return 0;
}



