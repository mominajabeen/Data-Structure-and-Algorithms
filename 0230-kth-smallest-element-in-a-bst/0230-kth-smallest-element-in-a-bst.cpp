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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> stk;
        TreeNode* curr = root;
        while(curr or !stk.empty()){
            while(curr){
                stk.push(curr);
                curr = curr->left;
            }
            curr = stk.top();
            stk.pop();
            k--;
            if(k == 0){
                return curr->val;
            }
            curr = curr->right;
        }
        return 0;
    }
};