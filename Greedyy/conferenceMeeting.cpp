
int conferenceMeetingRoom(vector<int>&begin, vector<int>&end) {
    int n = begin.size();
    vector<pair<int,int>>intervals(n);

    for(int i = 0; i <n ; i++) {
        intervals[i] = {end[i] , begin[i]};
    }

    sort(intervals.begin() , intervals.end());
    int count = 1;
    int end_time = intervals[0].first;

    for(int i = 1; i < n; i++) {
        if(intervals[i].second > end_time) {
            count++;
            end_time = interval[i].first;
        }
    }

    return count;
     
}

//TC :- O(NlogN)
//SC :- O(N)

