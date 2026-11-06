
vector<int>NextGreaterElementLookup(vector<int>&nums1, vector<int>&nums2) {
    vector<int>res;
  
    for(int num : num2) {
        int next = -1;
        int indx = -1;

        for(int i = 0; i < nums2.size(); i++) {
            if(nums2[i] == num) {
                indx = i;
                break;
            }
        }

        for(int i = indx + 1; i < nums2.size(); i++) {
            if(nums2[i] > num) {
                next = nums2[i];
                break;
            }
        }

        res.push_back(next);
    }

    return res;
}


