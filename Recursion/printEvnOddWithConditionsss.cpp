
void evenOddNumbers(int n) {
   
    for(int cur = 0; cur < n; cur++) {
        if(cur % 2 == 0) {
            cout<<cur<<" ";
        }
    }

    for(int cur = n; cur >= 1; cur--) {
        if(cur % 2 == 1) {
            cout<<cur<<" ";
        }
    }

}


