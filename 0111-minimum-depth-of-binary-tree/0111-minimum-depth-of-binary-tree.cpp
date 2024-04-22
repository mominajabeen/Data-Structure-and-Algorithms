/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        int minDepth = 0;
        if(!root)   return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            minDepth++;
            vector<int> level;
            int qSize = q.size();
            for(int i = 0; i<qSize; i++){
                TreeNode* currentNode = q.front();
                q.pop();
                if(currentNode->left == nullptr && currentNode->right == nullptr)
                    return minDepth;
                else{
                    if(currentNode->left)   q.push(currentNode->left);
                    if(currentNode->right)  q.push(currentNode->right);
                }
            }
        }
        return minDepth;
    }
};