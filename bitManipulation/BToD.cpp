int BToDecimal(int str) {
    
    int n = str.size();
    int product = 1;
    int ans = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(str[i] == '1') {
            ans += product;
        }

        product *= 2;
    }

    return product;
   
}


