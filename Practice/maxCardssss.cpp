intmaxCardPoints(vector<int>&cardPoints, int k)
{
    int n = cardPoints.size();
    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        totalSum += cardPoints[i];
    }

    int windowSum = 0;
    int windowLen = n - k;
    int minSum = 0;

    for(int i = 0; i < n; i++) {
        windowSum += cardPoints[i];

        if(i > windowLen) windowSum -= cardPoints[i - windowLen];
        if(i >= windowLen - 1) minSum = min(minSum, windowSum);
    }

    return totalSum - minSum;
}

