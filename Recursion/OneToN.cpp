
void OneToN(int i, int n) {
    if(i == n + 1) {
        return;
    }

    cout<<i<<endl;
    print(i + 1 , n);
}

int main() {
    print(1,N);
}

