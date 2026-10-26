
class Node {
public:
    int data;
    Node* next;
    Node(int data, Node* next = nullptr) : data(data), next(next) {}
};

class solution {
public:
    Node* top;
    solution() {
        // Write code to initialize top pointer
        top = nullptr;
    }

    void push(int x) {
        // Write code for push operation
        Node* temp = new Node(x);
        temp -> next = top;
        top = temp;
    }

    int pop() {
        // Write code for pop operation
        if(empty()) return -1;
        int val = top->data;
        Node* temp = top;
        top = top -> next;
        delete temp;
        return val;
    }

    int topOp() {
        // Write code for top operation
        return empty() ? -1 : top -> data;
    }

    bool empty() {
        // Write code for empty operation
        return top == nullptr;
    }
};



