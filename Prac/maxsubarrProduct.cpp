int maxSubarrProduct(vector<int>&arr)
{
    int n = arr.size();
    int maxPro = INT_MIN;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            double product = 1;
            for(int k = j + 1; k <= i; k++) {
                product = product * arr[k];
            }
            
            maxPro = max(maxPro , product);
        }
    }
 
    return maxPro;

}

