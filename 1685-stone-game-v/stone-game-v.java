class Solution {
    public int stoneGameV(int[] stoneValue) {
        int n = stoneValue.length;
        int[] prefix = new int[n + 1];
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + stoneValue[i];
        }

        int[][] memo = new int[n][n];
        for (int[] row : memo)
        {
            java.util.Arrays.fill(row, -1);
        }

        return dp(0, n - 1, prefix, memo);
    }

    private int dp(int i, int j, int[] prefix, int[][] memo)
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
                best = Math.max(best, dp(i, k, prefix, memo) + leftSum);
            }
            else if (leftSum > rightSum)
            {
                best = Math.max(best, dp(k + 1, j, prefix, memo) + rightSum);
            }
            else
            {
                best = Math.max(best, dp(i, k, prefix, memo) + leftSum);
                best = Math.max(best, dp(k + 1, j, prefix, memo) + rightSum);
            }
        }

        memo[i][j] = best;
        return best;
    }
}