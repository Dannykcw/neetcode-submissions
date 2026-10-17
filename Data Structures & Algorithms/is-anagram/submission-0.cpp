class Solution {
    // Check s and t is equal in length, otherwise return false
    // make two vectors which holds the content of s and t respectively.
    // named a and b.
    // (this work becuase content of the two should match exactly after they are sorted)
    // Loop through s and t, and check that the elements at the same offset
    // at s is the same as that at t.
    // Time:
    // 

public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        for (auto i = 0; i < s.length();i++) {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};
