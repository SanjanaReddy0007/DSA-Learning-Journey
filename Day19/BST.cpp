#include<bits/stdc++.h>
using namespace std;

Node* buildBST(int start,int end ,vector<int>&values) {
    if(start > end) {
        return nullptr;
    }

   int mid = (start + end) / 2;
   Node* root = new Node(values[mid]);
   root ->  left = buildBST(start,mid - 1,values);
   root -> right = buildBST(mid + 1,end,values);
   return root;
}


Node* sortedToBST(vector<int>&values) {
    return buildBST(0,values.size() - 1,values);
}



//TC:- O(n) recursion splits two parts findin the mid,cretaing the node and assigning pointers................


