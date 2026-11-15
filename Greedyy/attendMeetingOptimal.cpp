
bool AttendMeeting(vector<vector<int>>&schedule) {
    int n = schedule.size();
    if(n <= 1) return true;

    sort(schedule.begin() , schedule.end());

    for(int i = 0; i < n; i++) {
        if(schedule[i][1] > schedule[i + 1][0]) {
            return false;
        }
    }

    return true;
}

//TC :- O(nlogn)
//SC :- O(n)
