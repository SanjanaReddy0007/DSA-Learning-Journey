
class Solution {
public:

     bool canMatch(vector<int>& nums, vector<int>& target,
                  int left, int k) {
        // Find the first decrease in this block, stores that index hereee....
        int drop = -1;

        for (int i = left; i < left + k - 1; i++) { //left + k - 1 is stop b4 last elm bcs we're comparing the num + 1 ... soooo
            if (nums[i] > nums[i + 1]) {
                drop = i;
                break;
            }
        }

        // No decrease: the block is already sorted.
        // It must equal its target block.
        if (drop == -1) {
            for (int i = 0; i < k; i++) {
                if (nums[left + i] != target[left + i]) { //left + i bcs block may start from some else pos not 0 soo
                    return false;
                }
            }
            return true;
        }

        // Start just after the decrease...if decr existssss
        // Check this one rotation against the target.
        int start = drop + 1;

        for (int i = 0; i < k; i++) {
            int index = left + (start - left + i) % k;

            if (nums[index] != target[left + i]) {
                return false;
            }
        }

        return true;
    }


    int sortableIntegers(vector<int>& nums) {
       int n = nums.size();

        vector<int> target = nums;
        sort(target.begin(), target.end());

        long long ans = 0;

     // Check every divisor k of n. If k does not divide n evenly, skip this k and try then next one
        for (int k = 1; k <= n; k++) {
            if (n % k != 0) {
                continue;
            }

            bool valid = true;

            // Check each consecutive block of length k. left+k is move complete one block forward.. move k postitionss
            for (int left = 0; left < n; left += k) {
                if (!canMatch(nums, target, left, k)) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ans += k;
            }
        }

        return ans;   
    }
};




