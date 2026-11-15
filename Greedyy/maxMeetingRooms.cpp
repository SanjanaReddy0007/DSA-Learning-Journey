
  int minimumMeetingRooms(vector<vector<int>>& times) {
	// Write your code here...
	    int n = times.size();
	    if(n == 0) return 0;
	    
	    vector<int>start(n) , ending(n);
	    
	    for(int i = 0; i < n; i++) {
	        start[i] = times[i][0];
	        ending[i] = times[i][1];
	    }
	    
	    sort(start.begin() , start.end());
	    sort(ending.begin() , ending.end());
	    int startPointer = 0, endPointer = 0, activeMeeting = 0, maxroomRequire = 0;
	    
	    while(startPointer < n && endPointer < n) {
	       if(start[startPointer] < ending[endPointer]) {
	           activeMeeting++;
	           startPointer++;
	       } else {
	           activeMeeting--;
	           endPointer++;
	       }
	       maxroomRequire = max(maxroomRequire , activeMeeting);
	    }
	    return maxroomRequire;
    }


