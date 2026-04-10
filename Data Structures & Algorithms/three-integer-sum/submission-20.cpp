class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> asc;
        asc = nums;
        int n = asc.size();
        sort(asc.begin(), asc.end());
        for (int i = 0; i < n - 2; i++) 
            for (int j = i + 1; j < n - 1; j++) 
                for (int k = j + 1; k < n; k++) 
                    if (asc[i] + asc[j] + asc[k] == 0) {
                        bool exists = false;
                        for (auto& triplet : result) {
                            if (triplet[0] == asc[i] && triplet[1] == asc[j])
                            exists = true;
                        }
                        if (!exists)
                            result.push_back({asc[i], asc[j], asc[k]});
                    }
        return result;
    }
};