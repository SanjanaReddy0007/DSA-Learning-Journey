
void sortstackDesc(stack<int>&inp) {
    stack<int>auxi;

    while(!inp.empty()) {
        int cur = inp.top();
        inp.pop();

        while(!auxi.empty() && auxi.top() < cur) {
            inp.push(auxi.top());
            auxi.pop();
        }
        auxi.push(cur);
    }

    while(!auxi.empty()) {
       inp.push(auxi.top());
       auxi.pop();
    }
}
//TC :- O(n^2)
//SC :- O(n)

