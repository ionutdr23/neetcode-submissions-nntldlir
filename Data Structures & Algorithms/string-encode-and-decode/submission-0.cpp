class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        vector<int> lengths;
        string result = "";
        for (string& str : strs) lengths.push_back(str.length());
        for (int length : lengths) result += to_string(length) + '/';
        result += '#';
        for (string& str : strs) result += str;
        return result;
    }

    vector<string> decode(string s) {
        if (s == "") return {};
        vector<int> lengths;
        vector<string> result;
        int i = 0;
        string len = "";
        while (s[i] != '#') {
            if (isdigit(s[i])) {
                len.push_back(s[i]);
            }
            else if (s[i] == '/') {
                lengths.push_back(stoi(len));
                len = "";
            }
            i++;
        }
        i++;
        for (int& length : lengths) {
            result.push_back(s.substr(i, length));
            i += length;
        }
        return result;
    }
};
