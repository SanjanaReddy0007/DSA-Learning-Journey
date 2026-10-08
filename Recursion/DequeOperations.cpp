 void addOrderToFront(deque<int>& orders, int orderId) {
        //Write your code here...
        orders.push_front(orderId);
    }
    
    void addOrderToBack(deque<int>& orders, int orderId) {
        //Write your code here...
        orders.push_back(orderId);
    }
    
    void removeOrderFromFront(deque<int>& orders) {
        //Write your code here...
        if(!orders.empty()){
            orders.pop_front();
        }
    }
    
    void removeOrderFromBack(deque<int>& orders) {
        //Write your code here...
        if(!order.empty()) {
            orders.pop_back();
        }
        
    }
    
    void displayOrders(deque<int>& orders) {
        //Write your code here...
        for(int order : orders) {
            cout<<order<<" ";
        }
        
    }


