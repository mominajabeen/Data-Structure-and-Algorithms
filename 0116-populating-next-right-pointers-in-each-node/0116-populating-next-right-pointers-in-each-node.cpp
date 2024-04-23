/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if(!root)   return root;
        q.push(root);
        while(!q.empty()){

            int levelSize = q.size();
            Node* previous = nullptr;;
            for(int i = 0; i<levelSize; i++){
                Node* currentNode = q.front();
                q.pop();
                if(previous != nullptr) previous->next = currentNode;
                previous = currentNode;
                if(currentNode->left)   q.push(currentNode->left);
                if(currentNode->right)  q.push(currentNode->right);
            }
        }
        return root;
    }
};