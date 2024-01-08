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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = 0;
        sumOfRange(root, low, high, res);
        return res;
    }
    private:
        void sumOfRange(TreeNode* root, int low, int high, int& res){
            if(root == NULL)    return;
            if(low <= root->val && root->val <= high){
                res += root->val;
            }
            sumOfRange(root->left, low, high, res);
            sumOfRange(root->right, low, high, res);
    }
};