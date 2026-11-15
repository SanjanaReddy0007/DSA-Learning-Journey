
bool isIt(vector<int>&slot1 , vector<int>&slot2) {
    return slot1[0] < slot2[1] && slot2[0] < slot1[1];
}

bool attendMeetings(vector<vector<int>>&schedule) {
    int n = schedule.size();
    if(n <= 1) return true;
    
   for(int i = 0; i < n - 1; i++) {
    for(int j = i + 1; j < n; j++) {
        if(isIt(schedule[i] , schedule[j] , schedule)) {
            return false;
        }
    }
   }

   return true;
}

