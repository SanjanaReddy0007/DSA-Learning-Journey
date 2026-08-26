int lateReturnFeetotal(vector<int>&delays) {
  int n = delays.size();
  int total = 0;

  for(int day : delays) {
    if(day == 1) {
       total += 1;
    } else if(day <= 5) {
        total += 2*delay;
    } else {
        total += 3*delay;
    }
  }

  return total;
}

