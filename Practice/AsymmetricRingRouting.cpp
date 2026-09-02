long long AsymmetricRingRouting(vector<int>&clockwise, vector<int>&counterClockwise,vector<int>&visits) {
    int n = clockwise.size();
    int totalTime  = 0;
    int current  = 0;

    for(int target : visits) {
        if(current == target) {
            continue;
        }

        int cw = 0;
        int node = current;
        while(node != target) {
            cw += clockwise[node];
            node = (node  + 1) % n;
        }

        int ccw = 0;
        node = current;
        while(node != target) {
            ccw += counterClockwise[node];
            node = (node - 1 + n) % n;
        }

        totalTime += min(cw, ccw);
        current = target;
    }

    return totalTime;
}

