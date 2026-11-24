
long long boundedMonotoneRectangleLimit(vector<vector<int>>&board, int limit) {
    int n = board.size() , m = board[0].size();
    long long ans = 0;
    vector<int>heights(n,0);


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(board[j][i] > limit) {
                heights[i] = 0;
            } else if(i > 0 && board[j - 1][i] > board[j][i]) {
                heights[i] += 1;
            } else {
                heights[i] = 1;
            }
        }
        ans += calc(heights,n)
    }

    return ans;
}

long long calc(vector<int>&heights , int n) {
    deque<vector<int,3>>st;
    long long ans = 0;
    st.push_back({-1,0,-1});

    for(int j = 0; j < n; j++) {
        int h = heights[j];
        while(st.back()[2] > h) {
            st.pop_back();
        }
        auto prev = st.back();
        long long curr = prev[1] + h * (j - prev[0]);
        ans += curr;
        st.push_back({j,curr,h});
    }
    return ans;
}

