
 string removeKDigits(string num, int k) {
        //Write your code here...
        int n = num.size();
        stack<char>stk;
        
        for(int i = 0; i < n; i++) {
            while(k!= 0 && !stk.empty() && stk.top() > num[i]) {
                stk.pop();
                k--;
            }
            stk.push(num[i]);
        }
        
        while(!stk.empty() && k != 0) {
            k--;
            stk.pop();
        }
        //adds all to ans 
        string ans = "";
        while(!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
       
        //removes the end zeroes leading zeroes
        while(ans != "" && ans.back() == '0') {
            ans.pop_back();
        }
        
        //after removing from stack it reverse to as a smalll number......
        reverse(ans.begin() , ans.end());
        if(ans == "") {
            ans = '0';
        }
        
        return ans;
        
    }
