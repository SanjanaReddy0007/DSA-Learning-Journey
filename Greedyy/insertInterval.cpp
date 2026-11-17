
vector<vector<int>>InsertInterval(vector<vector<int>>&timeslot, vector<int>&newslot) {
    int n = timeslot.size();
    vector<vector<int>>ans;
    int i = 0;

    while(i < n && timeslot[i][1] < newslot[0]) {
       ans.push_back(timeslot[i]);
       i++;
    }

    int start = INT_MAX, end = -1;
    while(i < n && timeslot[i][0] < newslot[1]) {
        if(start == INT_MAX) {
            start = newslot[i][0];
        }
        end = neslot[i][1];
        i++;
    }

    start = min(start , newslot[0]);
    end = max(end , newslot[1]);
    ans.push_back({start,end});

    while(i < n ) {
        ans.push_back(timeslot[i]);
        i++;
    }

    return ans;
    
} 

