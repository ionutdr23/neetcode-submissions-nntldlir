class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> keys;
        for (string& token : strs) {
            string key = token;
            sort(key.begin(), key.end());
            keys[key].push_back(token);
        }
        vector<vector<string>> result;
        for (auto& item : keys) {
            result.push_back(item.second);
        }
        return result;
    }
};
