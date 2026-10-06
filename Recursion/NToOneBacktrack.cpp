
void print(int i, int n) {
    if(i == n + 1) return 0;

    print(i + 1, n);
    cout<<i<<endl;

}

void NtoOnee(int n) {
    return print(1 , n);
}

