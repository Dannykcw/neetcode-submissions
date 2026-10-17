// Optimal with hash based
// note that nums[i] == target - nums[j].
// this is trivial if membership is O(1) <- map (nums[j] -> j)
// So given i can check if pair j exist
// Fill some set set with all elements of nums
// For each num in nums except the last one:
// Check that target - nums[num] exist in the map.
// If so return the index, if not continue
// (terminates)
// edge cases:
// i == j -> continue
// 


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> result;
        std::unordered_map<int, int> map;
        for (auto i = 0; i < nums.size(); i++) {
            map.insert({nums[i], i});
        }
        for (auto i = 0; i < nums.size(); i++) {
            auto j = map.find(target - nums[i]);
            if (j != map.end()) {
                auto index = (*j).second;
                if (i == index) continue;
                if (i > index) {
                    return {index, i};
                } else {
                    return {i, index};
                }
            }
        }
    }
};
