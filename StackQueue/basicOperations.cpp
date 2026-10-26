
class solution{
    int *arr;
    int top;
    int capacity;

public:
    
   Stack(int capacity) {
       this->capacity = capacity;
       arr = new int[capacity];
       top -= 1;
   }

   int push(int num) {
      if(top < capacity - 1) {
         arr[++top] = num;
         return 0;
      } else {
        return -1;
      }
   }

   int pop(int) {
      if(top == -1) {
        return -1;
      } else {
        return arr[top--];
      }
   }

   int topElement() {
      if(top == -1) {
        return -1;
      } else {
        return arr[top];
      }
   }

   bool isEmpty() {
      return top == -1;
   }

   bool isfull() {
     return top == capacity - 1;
   }

   int size() {
     return top + 1;
   }

}

//O(1) of the time complexity for all.....

