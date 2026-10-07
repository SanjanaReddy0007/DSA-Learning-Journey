
vector<int>GeneratePattern(int n) {
    vector<int>res;

    function< void(int , bool)> helper = [&](int cur, bool down) {
        res.push_back(cur);
        
        if(cur == n || !down) {
            return;
        }

        if(down) {
            if(cur - 5<= 0) {
               helper(cur - 5 ,false);
            } else {
                helper(cur - 5, true);
            }
        } else {
            helper(cur + 5 , false);
        }
    }

    helper( n ,true);
    return res;
}


