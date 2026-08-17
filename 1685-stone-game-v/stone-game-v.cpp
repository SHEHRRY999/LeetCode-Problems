class Solution
{
public:
    int stoneGameV(vector<int>& stoneValue)
    {
        int n = stoneValue.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + stoneValue[i];
        }

        vector<vector<int>> memo(n, vector<int>(n, -1));

        return dp(0, n - 1, prefix, memo);
    }

private:
    int dp(int i, int j, vector<int>& prefix, vector<vector<int>>& memo)
    {
        if (i == j)
        {
            return 0;
        }
        if (memo[i][j] != -1)
        {
            return memo[i][j];
        }

        int best = 0;
        for (int k = i; k < j; k++)
        {
            int leftSum = prefix[k + 1] - prefix[i];
            int rightSum = prefix[j + 1] - prefix[k + 1];

            if (leftSum < rightSum)
            {
                best = max(best, dp(i, k, prefix, memo) + leftSum);
            }
            else if (leftSum > rightSum)
            {
                best = max(best, dp(k + 1, j, prefix, memo) + rightSum);
            }
            else
            {
                best = max(best, dp(i, k, prefix, memo) + leftSum);
                best = max(best, dp(k + 1, j, prefix, memo) + rightSum);
            }
        }

        memo[i][j] = best;
        return best;
    }
};