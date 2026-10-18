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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> s;
        if (!root) return {};
        s.emplace(root);
        vector<vector<int>> result;
        while (!s.empty()) {
            auto size = s.size();
            vector<int> level;
            for (auto i = 0; i < size; i++) {
                auto temp = s.front();
                s.pop();
                level.emplace_back(temp->val);
                if (temp->left) {
                    s.emplace(temp->left);

                }
                if (temp->right) {
                    s.emplace(temp->right);
                };
            }
            result.push_back(level);
        }
        return result;
    }
};
