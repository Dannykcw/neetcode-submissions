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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int result = 0;
        std::queue<TreeNode*> s;
        s.emplace(root);
        while (!s.empty()) {
            auto size = s.size();
            for (auto i = 0; i < size; i++) {
                auto temp = s.front();
                s.pop();
                if (temp->left != nullptr) s.emplace(temp->left);
                if (temp->right != nullptr) s.emplace(temp->right);
            }
            result += 1;
        }
        return result;
    }
};
