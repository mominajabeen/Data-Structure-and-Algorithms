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
        queue<TreeNode*> q;
        double sum = 0;
        q.push(root);
        while(q.size()){
            double sum = 0;
            int qlen = q.size();
            for(int i = 0; i < qlen; i++){
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;
                if(curr->left)  q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            res.push_back(sum/qlen);
        }
        return res;       
        }
};