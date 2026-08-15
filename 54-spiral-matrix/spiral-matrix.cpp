class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        int i = 0, j = 0;
        const int UP = 0, RIGHT = 1, DOWN = 2, LEFT = 3;
        int direction = RIGHT;

        int UP_WALL = 0;
        int RIGHT_WALL = n;
        int DOWN_WALL = m;
        int LEFT_WALL = -1;

        while ((int)ans.size() != m * n)
        {
            if (direction == RIGHT)
            {
                while (j < RIGHT_WALL)
                {
                    ans.push_back(matrix[i][j]);
                    j += 1;
                }
                j -= 1;
                i += 1;
                RIGHT_WALL -= 1;
                direction = DOWN;
            }
            else if (direction == DOWN)
            {
                while (i < DOWN_WALL)
                {
                    ans.push_back(matrix[i][j]);
                    i += 1;
                }
                i -= 1;
                j -= 1;
                DOWN_WALL -= 1;
                direction = LEFT;
            }
            else if (direction == LEFT)
            {
                while (j > LEFT_WALL)
                {
                    ans.push_back(matrix[i][j]);
                    j -= 1;
                }
                i -= 1;
                j += 1;
                LEFT_WALL += 1;
                direction = UP;
            }
            else
            {
                while (i > UP_WALL)
                {
                    ans.push_back(matrix[i][j]);
                    i -= 1;
                }
                i += 1;
                j += 1;
                UP_WALL += 1;
                direction = RIGHT;
            }
        }

        return ans;
    }
};