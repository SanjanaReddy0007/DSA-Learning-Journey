
int maxEligibeResearches(vector<int>&projects) {
    sort(arr.begin() , arr.end());
    int n = projects.size();
     int i = 0;

    while( i < n && projects[n - 1 - i] >= i + 1) {
        i++;
    }

    return i;
}

