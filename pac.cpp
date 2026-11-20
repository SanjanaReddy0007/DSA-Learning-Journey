
class minStack{
    private:
       stack<apir<int,int>>stk;

       public:
         minstack() {

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

         int top() {
            return stk.top().first;
         }

         int pop() {
            return stk.pop();
         }

         int getmin() {
            return stk.top().second;
         }

}
