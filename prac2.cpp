
class Queue{
    private:
      int front;
      int back;
      int size;
      int capacity;
      vector<int>arr;

      public:
        myQueue(int k) {
            capacity = k;
            arr.resize(k);
            front = -1;
            back = -1;
            size = 0;
        }

        void push(int x) {
            if(size == capacity) {
                return -1;
            }
            if(size == 0) {
                front = 0;
                back = 0;
            } else {
                back = (back + 1) % capacity;
            }
            arr[back] = x;
            size++;
            return arr[back];
        }

        void pop() {
            int removedEl = arr[front];
            if(size == 1) {
                front = -1, back = -1;
            } else {
                front = (front + 1) % capacity;
            }
            size--;
            return removedEl;
        }

        int size() {
            return size;
        }

        int empty() {
            if(size == 0) return -1;
            return arr[front];
        }

        int pop() {
            int removedEl = arr[front];
            if(size == 0) {
                return -1;
            }

            if(size == 1) { 
                front = -1,back = -1;
            } else {
                front = (front + 1)%capacity;
            }
        }

}
