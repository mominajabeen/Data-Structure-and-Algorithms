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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> output;
        
        if(!root)   return output;
        deque<vector<int>> res;
        
        queue<TreeNode*> queue;
        queue.push(root);
        while(!queue.empty()){
            vector<int> level;
            int sizeofQueue = queue.size();
            for(int i = 0; i<sizeofQueue; i++){
                TreeNode* currentNode = queue.front();
                queue.pop();
                if(currentNode->left)   queue.push(currentNode->left);
                if(currentNode->right)  queue.push(currentNode->right);
                level.push_back(currentNode->val);
            }
            res.push_front(level);
            // res.push_front(level);
        }
        for(auto currentLevel:res){
            output.push_back(currentLevel);
        }
        return output;
    }
};