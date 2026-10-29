
class solution {
    public:
    Node* front;
    Node* back;
    int size;

    solution() {
        // Initialize Front, Back, and size
        front = NULL;
        back = NULL;
        size = 0;
    }

    void push(int x) {
        // Write Your Push Operation
        Node* temp = new Node(x);
        
        if(size == 0) {
            front = back = temp;
        } else {
            back->next = temp;
            back = temp;
        }
        size++;
        
    }

    int pop() {
        // Write Your Pop Operation
        if(emptyOp()) {
            return -1;
        }
        
        int removedElement = front->data;
        
        if(size == 1) {
            front = back = NULL;
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        size--;
        return removedElement;
    }

    int frontOp() {
        // Write Your Front Operation
        if(emptyOp()) {
            return -1;
        }
        return front->data;
        
    }

    int backOp() {
        // Write Your Back Operation
        if(emptyOp()) {
            return -1;
        }
        return back->data;
        
    }

    bool emptyOp() {
        // Write Your Empty Operation
        return size == 0;
        
    }

    int sizeOp() {
        // Write Your Size Operation
        return size;
        
    }
};




