
int maximalnitRectangleDiscoveryy(vector<vector<char>>&mat) {
    if(mat.empty()) return 0;

    int n = mat.size(), m = mat[0].size();
    vector<left(m,0), vector<right>(m,m), vector<int>height(m,0);

    int maxA = 0;

    for(int i = 0; i < n; i++) {
        int cur_left = 0, cur_right = m;

        for(int j = 0; j < n; j++) {
            if(if(mat[i][j] == '1')) {
                height[j]++;
            } else {
                height = 0;
            }
        }

        for(int j = m - 1; j >= 0; j--) {
            if(mat[i][j] == 1) {
                left = max(left, cur_left);
            } else {
                left[j] = 0;
                cur_left = j + 1;
            }
        }

        for(int j = m - 1; j >= 0; j--) {
            if(mat[i][j] == 1) {
                right = min(right, cur_right);
            } else {
                right[j] = 0;
                cur_right = j;
            }
        }

        for(int j = 0; j < n; j++) {
            maxA = max(cur_left , cur_right) * height[j];
        }
    }

    return maxA;

}

