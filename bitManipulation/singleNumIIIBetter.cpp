
vector<int> findSingleNumbers(vector<int>& numbers) {
     unordered_map<int,int>m;

     for(int num : numbers) {
        m[num]++;
     }

     vector<int>result(2);
     int indx = 0;
     for(int num:m) {
        if(num.seccond == 1) {
            result[indx++] = num.first;
        }
     }

     sort(result.begin() , result.end());
     return result;

}   

