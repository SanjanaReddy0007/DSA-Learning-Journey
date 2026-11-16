
bool jumpGame(vector<int>&steps) {
    int n = steps.size();
    int max_indx = 0;

    for(int i = 0; i < n && i < max_indx; i++) {
         max_indx = max(max_indx , i + steps[i]);
         if(max_indx >= n - 1) {
            return true;
         }
    }

    return false;
}

