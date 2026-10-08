
bool isValid(int i, int j, int m, vector<vector<int>>laybrinth) {
   return i >= 0 && i < m && j >= 0 && j < m && laybrinth[i][j] = 1;
}


void findPAth(int i, int j, string path, int m, vector<vector<int>>&laybrinth,vector<string>&res) {

    if(i == m - 1 || j == m - 1) {
        res.push_back(path);
    }

    laybrith[i][j] = 1;
    if(isValid(i + 1, j , m , laybrith)) {
        findPAth(i + 1, j , path + "D" , m,laybrinth);
    }

    if(isValid(i - 1, j,m,laybrinth)) {
        findPAth(i - 1, j,path + "U" , m,laybrinth);
    }

    if(isValid(i,j + 1, m , laybrinth)) {
        findPAth(i,j + 1, path + "R" , m , laybrinth);
    }

    if(isValid(i , j - 1, m ,laybrinth)) {
        findPAth(i , j - 1, path + "L" , m , laybrinth);
    }

    laybrinth[i][j] = 1;

}

vector<vector<int>>DicoverRoutesInLabyrinth(int m, vector<vector<int>>&laybrinth) {
    vector<string>res;
    if(laybrinth[0][0] == 1) {
        findPAth(0,0,"",m,laybrinth,res);
    }

    sort(res.begin() , res.end());
    return res;
}

