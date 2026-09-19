int maxEligibleResearches(vector<int>&projects) {
    sort(projects.begin() , projects.end());

     int n = projects.size();
     int i = 0;

     while(i < n && projects[n - 1 - i] >= i + 1) {
        i++;
     }

     return i;

}

