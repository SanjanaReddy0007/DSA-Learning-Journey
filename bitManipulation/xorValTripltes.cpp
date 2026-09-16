
long long countValidtriplets(vector<int>&firstVal, vector<int>&secondVal, vector<int>&thirsVal)
{
    int ans = 0;
    for(int i = 0; i < firstVal.size(); i++) {
        for(int j = 0; j < secondval.size(); j++) {
            for(int k = 0; k < thirdVal.size(); k++) {
                int xorVal = firstVal[i] ^ secondVal[j] ^ thirdVal[k];
                if(__builtin_popcount(xorVal) % 2 == 0) {
                    ans++;
                }
            }
        }
    }

    return ans;

}

