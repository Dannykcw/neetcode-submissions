class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> foo;
        for (auto i : nums) {
            auto result = foo.insert(i);
            if (result.second == false) {
                return true;
            }
        }
        return false;
    }
};