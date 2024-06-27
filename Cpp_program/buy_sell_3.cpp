class Solution
{
public:
    int solve(int ind, int buy, int cap, vector<int> &prices, int n, vector<vector<vector<int>>> &t)
    {
        if (ind == n || cap == 0)
            return 0;
        if (t[ind][buy][cap] != -1)
            return t[ind][buy][cap];
        if (buy == 1)
        {
            return t[ind][buy][cap] = max(-prices[ind] + solve(ind + 1, 0, cap, prices, n, t), 0 + solve(ind + 1, 1, cap, prices, n, t));
        }
        return t[ind][buy][cap] = max(prices[ind] + solve(ind + 1, 1, cap - 1, prices, n, t), 0 + solve(ind + 1, 0, cap, prices, n, t));
    }
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<vector<int>>> t(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(0, 1, 2, prices, n, t);
    }
};