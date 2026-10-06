
void print(int i, int n) {
    if(i == 0) return;

    cout<<i<<endl;
    print(i - 1 , n);
}

void reverse(int n) {
    print( n ,n);
}

