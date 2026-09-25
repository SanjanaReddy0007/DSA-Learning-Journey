
bool backtrack(vector<vector<int>>&arr , string s, int i, int j, int index) {
    if(index == s.size()) return true;

    if(i < 0 || i > rows || j > cols || j < 0 || arr[i][j] != arr[index]) {
        return false;
    }

    int temp = arr[i][j];
    arr[i][j] = '#';

    vector<int>rowOf = {0,1,0,-1};
    vector<int>ColOff = {1,0,-1,0};

    for(int d = 0; d < 4; d++) {
        if(backtrack(arr,s,i + rowOf[d],j + colOff[d],index)) {
            arr[i][j] = temp;
            return true;
        }
    }

    arr[i][j] = temp;
    return false;

}


bool wordSearch(vector<vector<int>>&arr , string s)
{
    int n = arr.size();
    int rows = arr.size() , cols = arr[0].size();
    
    if(s.size() > rows*cols) return false;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if (backtrack(arr,s,i,j,0)) {
                return true;
            }
        }
    }

    return false;
    
}


