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
    void good(TreeNode* node, int max, int& count) {
        if (!node)
            return;
        else if (node->val < max){
            good(node->left, max, count);
            good(node->right, max, count);
            return;
        }
        else {
            count++;
            good(node->left, node->val, count);
            good(node->right, node->val, count);
            return;
        }
    }
    int goodNodes(TreeNode* root) {
        int max = root->val;
        int count = 0;
        good(root, max, count);
        return count;
    }
};
