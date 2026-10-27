
class Solution{
    private:
       stack<pair<int,int>>st;

       public:
       Minstack() {
         
       }

     void push(int x) {
        if(stk.empty()) {
            stk.push({x,x});
        } else {
            if(x < stk.top().second) {
                stk.push({x,x});
            } else {
                stk.push({x,stk.top().second});
            }
        }
     }


     void pop() {
        stk.pop();
     }

     int top() {
        return stk.top().first;
     }

     int mini() {
        return stk.top().second;
     }

}



