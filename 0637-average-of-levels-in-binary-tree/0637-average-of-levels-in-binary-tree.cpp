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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(!root)   return res;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            double sum = 0;
            int qSize = q.size();
            for(int i = 0; i<qSize; i++){
                TreeNode* currentNode = q.front();
                q.pop();
                sum = sum + currentNode->val;
                if(currentNode->left)   q.push(currentNode->left);
                if(currentNode->right)  q.push(currentNode->right);
            }
            res.push_back(sum/qSize);
        }
        return res;
    }
};