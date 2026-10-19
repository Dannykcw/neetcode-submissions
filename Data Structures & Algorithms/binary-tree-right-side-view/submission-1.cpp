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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        std::queue<TreeNode*> q;
        q.emplace(root);
        vector<int> result;
        vector<int> level;
        while(!q.empty()) {
            auto size = q.size();
            for (auto i = 0; i < size; i++) {
                auto temp = q.front();
                q.pop();
                level.emplace_back(temp->val);
                if (temp->left) q.emplace(temp->left);
                if (temp->right) q.emplace(temp->right);
            }
            result.emplace_back(level.back());
            level.clear();
        }
        return result;
    }
};
