class Solution {
public:
    // use a ordered/unordered set.
    // Insert all element into the set. The hash algorithm under the hood
    // ensures that there are no duplicates
    // Time:
    // O(n) insertions and associated operations for running the hashset
    // Space:
    // O(n) space for making the hash.
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        for (auto i : nums) {
            if (set.insert(i).second != true) {
                return true;
            }
        }
        return false;
    }
};