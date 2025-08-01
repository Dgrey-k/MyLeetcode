//给定一个不含重复数字的数组 nums ，返回其 所有可能的全排列 。

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        vector<bool> used(nums.size(), false);
        backtrack(nums, used, path, res);
        return res;
    }

    void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& path, vector<vector<int>>& res) {
        if (path.size() == nums.size()) {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            used[i] = true;
            path.push_back(nums[i]);
            backtrack(nums, used, path, res);
            path.pop_back();
            used[i] = false;
        }
    }
};
