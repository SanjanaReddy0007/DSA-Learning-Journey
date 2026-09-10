
string multplication(string num1, stirng num2) {
    
    if(num1 == "0" || num2 == "0") {
        return "0";
    }

    int n = num1.size() , m = num2.size();
    int total = n + m;
    vector<int>result(total , 0);

    for(int i = n - 1; i >= 0; i--) {
        for(int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] = sum / 10;
        }
    }

    int start = 0;
    string ans = "";

    while(start == 0 && start < total) {
        start++;
    }

    for(int k = strat; k < total; k++) {
        ans.push_back(result[k] , 0);
    }

    return ans.empty ? "0" : ans;
}

