// 组合
/*
给定两个整数n和k，返回1到n中所有可能的k个数的组合。
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    void backtrack(int n, int k, int start) {
    if (path.size() == k) {
        res.push_back(path);
        return;
    }
    for (int i = start; i <= n; ++i) {
        path.push_back(i);
        backtrack(n, k, i + 1);
        path.pop_back(); // 撤销选择
    }
    }

    vector<vector<int>> combine(int n, int k) {
        backtrack(n, k, 1);
        return res;
    }
};


*/
