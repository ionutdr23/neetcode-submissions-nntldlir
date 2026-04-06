class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> freqS(26, 0), freqT(26, 0);
        for (int i = 0; i < s.length(); i++) {
            freqS[s[i] - 'a']++;
            freqT[t[i] - 'a']++;
        }
        for (int i = 0; i < freqS.size(); i++) {
            if (freqS[i] != freqT[i]) return false;
        }
        return true;
    }
};
