int maxTripletValues(vetor<int>&values) {
    int n = values.size();
    int max1 = INT_MIN;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(values[i] >= values[j]) {
                continue;
            }

            for(int k = j + 1; k < n; k++) {
                if(values[j] < values[k]) {
                    int curr = values[i] - values[j] + values[k];
                    ans = max(ans, curr);
                }
            }
        }
    }

    return ans;

}

