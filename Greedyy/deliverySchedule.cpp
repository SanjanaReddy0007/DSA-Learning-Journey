/*
class Deliveries {
    public:
      int id;
      int deadline;
      int payment;

    Deliveries() : id(0) : deadline(0):payment(0){};
    Deliveries(int id,int deadline, int payment):id(id),deadline(deadline),payment(payment);
}


*/


static bool(Delivery a, Delivery b) {
    return a.payment > b.payment;
}

vector<int>DeliveryDchedule(vector<Deliveries>&arr) {
    int n = arr.size();
    sort(arr.begin() , arr.end());
 
    int max_d = 0;
    for(int i = 0; i < n; i++) {
        max_d = max(max_d , arr[i].deadline);
    }
    
    int count = 0, total = 0;
    vector<int>slots(max_d + 1, -1);

    for(int i = 0; i < n; i++) {
        int j = arr[j].deadline;
 
        while(j > 0) {
           if(slots[j] == -1) {
           count++;
           total += arr[i].payment;
           break;
        }
       j--;
    }

    if(count == max_d) break;
}

 return {count, total};

}

