class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> anagrams_group;
        for (auto& str : strs) {
            std::string sorted = str;
            std::sort(sorted.begin(), sorted.end());
            anagrams_group[sorted].push_back(str);
        }
        vector<vector<string>> result;
        for (auto& pair : anagrams_group) {
            result.push_back(pair.second);
        }
        return result;
    }
};
