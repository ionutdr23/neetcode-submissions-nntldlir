class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix, suffix, result;
        int prod = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                prefix.push_back(1);
            }
            else {
                prod *= nums[i - 1];
                prefix.push_back(prod);
            }
        }
        prod = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i == nums.size() - 1) {
                suffix.push_back(1);
            }
            else {
                prod *= nums[i + 1];
                suffix.push_back(prod);
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(prefix[i] * suffix[suffix.size() - i - 1]);
        }
        return result;
    }
};