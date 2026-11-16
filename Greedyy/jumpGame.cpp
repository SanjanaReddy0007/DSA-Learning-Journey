
bool f(vector<int>&steps, int indx) {
    int n = steps.size();
    
    if(steps[indx] == 0) return false;
    if(indx >= n - 1) {
        return true;
    }
   
    for(int i = 1; i < steps[indx]; i++) {
        if(f(steps, indx + i)) {
            return true;
        }
    }
    return false;

}

bool jumpGame(vector<int>&steps) {
    return f(steps,0);
}
