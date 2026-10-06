
void print(int i, int n) {
    if(i == 0) return 0;

    print(i - 1, n);
    cout<<i<<endl;

}

void NtoOnee(int n) {
    return print(n , n);
}




