class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid)
    {
        unordered_set<int> forA;
        int a = 0;
        int n = grid.size();
        long long actualSum = 0;
        long long expectedSum = (long long)n * n * (n * n + 1) / 2;
        vector<int> ans;

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                actualSum += grid[i][j];
                if (forA.find(grid[i][j]) != forA.end())
                {
                    a = grid[i][j];
                }
                forA.insert(grid[i][j]);
            }
        }

        long long b = expectedSum - actualSum + a;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};