
vector<int>RecursivePowerOfThree(int n) {
    vector<int>res;

    function<void(int)>dfs = [&](int cur) {
        if(cur > n) return;
        res.push_back(cur);
        dfs(cur * 3);
    }

    dfs(1);
    return res;
}


