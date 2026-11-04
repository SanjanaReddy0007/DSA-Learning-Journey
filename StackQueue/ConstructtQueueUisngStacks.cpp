
class Solution{
    public:
       stack<int>stk1,stk2;

       void push(int x) {
         while(!stk1.empty()) {
            stk2.push(stk1.top());
            stk1.pop();
        }

         stk1.push(x);
         while(!stk2.empty()) {
            stk1.push(stk2.top());
            stk2.pop();
         }
       }

       void pop() {
          stk1.pop();
       }

       void top() {
         return stk1.top();
       }

       int size() {
        return stk1.size();
       }

       int back() {
           if(!stk1.empty()) {
             while(!stk1.empty()) {
                stk2.push(stk1.top());
                stk1.pop();
             }

             int ans = stk2.top();
             while(!stk2.empty()) {
                stk1.push(stk2.top());
                stk2.pop();
             } 

             return ans;
           }
           return -1;
       }
       

}

