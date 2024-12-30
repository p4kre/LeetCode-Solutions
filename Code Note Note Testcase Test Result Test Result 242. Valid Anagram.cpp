class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int mapS[26] = {0}; // Frequency array for `s`
        int mapT[26] = {0}; // Frequency array for `t`

        // Count character frequencies
        for (char c : s) {
            mapS[c - 'a']++;
        }

        for (char c : t) {
            mapT[c - 'a']++;
        }

        // Compare frequency arrays
        for (int i = 0; i < 26; i++) {
            if (mapS[i] != mapT[i]) return false;
        }

        return true; // Strings are anagrams
    }
};
