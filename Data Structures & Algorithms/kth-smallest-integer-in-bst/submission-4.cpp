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
    void kthSmallestHelper(TreeNode* node, int k, int& count, int& answer) {
        if (!node || count == k) return;
        if (node->left) kthSmallestHelper(node->left, k, count, answer);
        if (count == k) {
            return;
        }
        count++;
        if (count == k) {
            answer = node->val;
            return;
        }
        if (node->right) kthSmallestHelper(node->right, k, count, answer);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int answer = 0;
        kthSmallestHelper(root, k, count, answer);
        return answer;
    }
};
