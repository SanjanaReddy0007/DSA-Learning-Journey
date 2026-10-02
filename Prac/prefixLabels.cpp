
bool prefixLabels(vector<string>&labels) {
    int n = labels.size();
    
    sort(labels.begin() , labels.end());
    for(int i = 1; i < n; i++) {
        if(labels[i].rfind(labels[i - 1] , 0) == 0) {
            return false;
        }
    }

    return true;
}


