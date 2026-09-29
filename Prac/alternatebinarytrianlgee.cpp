
void alternateBinaryTriangle(int n) {
    
    for(int i = 1; i <= n; i++) {
        int val = (i % 2 == 1) ? 1 : 0;

        for(int j = 1; j <= i; j++) {
            cout<<val<<" ";
            val = 1 - val;
        }
    }
    cout<<endl;
}


