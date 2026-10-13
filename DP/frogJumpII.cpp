
int minJump(int i, int height[] , int k) {
    if(i == 0) return 0;
    int minEnergy = INT_MAX;

    for(int j = 1; j <= k; j++) {
        if(i - j >= 0) {
            int energy = bas(height[i] - height[i - j]) + minJump(i - j, height,k);
            minEnergy = min(minEnergy , energy);
        }
    }

    return minEnergy;

}

int frogJump(int k, int height[] , int n) {
    return minJump(n - 1, height, k);
}

