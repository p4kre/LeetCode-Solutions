class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false; // Early exit if lengths differ
        
        unordered_map<char, int> mpp;

        // Count frequency of characters in string `s`
        for (char c : s) {
            mpp[c]++;
        }

        // Subtract frequency based on characters in string `t`
        for (char c : t) {
            if (mpp[c] == 0) {
                return false; //  frequency is zero
            }
            mpp[c]--;
        }

        // If all frequencies are zero, they are anagrams
        return true;
    }
};
