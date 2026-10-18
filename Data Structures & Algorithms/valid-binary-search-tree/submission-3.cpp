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
   bool isValidBSTHelper(TreeNode* node, int upper, int lower) {
    if (!node) return true;
    else if (node->val >= upper || node->val <= lower) return false;
    else return isValidBSTHelper(node->left, node->val, lower) && isValidBSTHelper(node->right, upper, node->val);
   }
    bool isValidBST(TreeNode* root) {
        // if (!root || !root->left && !root->right || root->left && !root->right) {
        //     return true;
        // } else if (root->left->val > root->right->val || root->left->val > root->val) {
        //     return false;
        // } else {
        //     return isValidBST(root->left) && isValidBST(root->right);
        // }
        return isValidBSTHelper(root, INT_MAX, INT_MIN);
    }
};
