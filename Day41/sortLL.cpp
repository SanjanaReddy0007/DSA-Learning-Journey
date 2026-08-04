#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       Node(int data,Node* next) : data (data) : next(next) {}
       Node(int data) : data(data) ,next(nullpt){}
}


class Solution{
    public:
       Node sortList(Node *head) {
        vector<int>arr;
        Node *temp = head;

        while(temp != nullptr) {
            arr.push_back(temp->data);
            temp = temp->next;
        }

        sort(arr.begin(),arr.end());
        temp = head;

        for(int i = 0; i < n; i++) {
            temp->data=arr[i];
            temp = temp - > next;
        }
       }

       return head;
}


//O(nlogn)
//O(n)

