
vector<int>NexxtGreaterElementLookup(vecctor<int>&num1, vector<int>&num2) {
    int n = num1.size();
    vector<int>res(n , -1);

    for(int num : num1) {
         int next = -1, indx = -1;

         for(int i = 0; i < num2.size(); i++) {
             if(num == num2[i]) {
                indx = i;
                break;
             }
         }

         for(int i = indx + 1; i < num2.size(); i++) {
            if(num2[i] > num) {
                next = num2[i];break;
            }
         }
        res.push_back(next);
    }

    return res;
}


