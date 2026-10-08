
class Node{
    public:
    int val;
    Node *left *right;
    Node (int v) : val(v) , left(nullptr) , right(nullptr);

class Solution{
    public:

    Node* buildBST(vector<int>&values, int start, int end) {
        if(start > end) {
            return nullptr;
        }

        int mid = (start + end) / 2;
        Node* root = new Node(values[mid]);
        root -> left = buildBST(start , mid - 1, values);
        root -> right = buildBST(mid + 1, right , values);

        return root;
  }

    Node* sortedrray(vector<int>&values) {
        return buildBST(values , 0, values.size() - 1);
    }

  }

}



