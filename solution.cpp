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
    vector<vector<int>> levels;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return levels;
        helper(root, 0);
        return levels;
    }
    void helper(TreeNode* root, int level) {
        if(levels.size() == level) {
            vector<int> lvl;
            levels.push_back(lvl);
        }
        levels[level].push_back(root->val);
        
        if(root->left != NULL) {
            helper(root->left, level +1);
        }
        if(root->right != NULL) {
            helper(root->right, level + 1);
        }
    }
};
