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
    int good(TreeNode* node, int min, int& count) {
        if (!node)
            return count;
        else if (node->val < min){
            good(node->left, min, count);
            good(node->right, min, count);
            return count;
        }
        else {
            count++;
            good(node->left, node->val, count);
            good(node->right, node->val, count);
            return count;
        }
    }
    int goodNodes(TreeNode* root) {
        int min = 0;
        int count = 0;
        return good(root, root->val, count);
    }
};
