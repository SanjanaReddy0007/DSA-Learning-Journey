int fourSum(vector<int>&A,vector<int>&B,vector<int>&C,vector<int>&D) {
    
    unordered_map<int,int>m;
    long long count = 0;

    for(int c : C) {
        for(int d : D) {
            m[c + d]++;
        }
    }

    for(auto a : A) {
        for(auto b : B) {
            int sum = -(a + b);
            if(m.find(sum) != m.end()) {
                count += m[sum];
            }
        }
    }

    return count;

};


