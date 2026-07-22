#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
       Node* sortsList(Node* head){
            vector<int>arr;

            int temp = head;
            while(temp != nullptr) {
                arr.push_back(temp->data);
                temp = temp -> next;
            }

            sort(arr.begin() , arr.end());

            temp = head;

            for(int i = 0; i < arr.size(); i++) {
                temp->data = arr[i];
                temp = temp->data;
            }

            return head;
       }
}


//TC :- O(nlogn)
//SC :- O(n)


