class Solution
{
    public List<Integer> spiralOrder(int[][] matrix)
    {
        int m = matrix.length, n = matrix[0].length;
        List<Integer> ans = new ArrayList<>();
        int i = 0, j = 0;
        final int UP = 0, RIGHT = 1, DOWN = 2, LEFT = 3;
        int direction = RIGHT;

        int UP_WALL = 0;
        int RIGHT_WALL = n;
        int DOWN_WALL = m;
        int LEFT_WALL = -1;

        while (ans.size() != m * n)
        {
            if (direction == RIGHT)
            {
                while (j < RIGHT_WALL)
                {
                    ans.add(matrix[i][j]);
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
                    ans.add(matrix[i][j]);
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
                    ans.add(matrix[i][j]);
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
                    ans.add(matrix[i][j]);
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
}