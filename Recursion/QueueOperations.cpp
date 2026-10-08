
void insertions(queue<int>&q, int k) {
    q.insert(k);
}

int findFreq(queue<int>&q, int k) {
    int freq = 0;
    queue<int>temp = q;

    while(!q.empty()) {
        if(q.top() == k) {
            freq++;
        }

        q.pop();
    }
    return freq;

}

