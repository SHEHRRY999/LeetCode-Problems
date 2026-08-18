class Solution
{
    public int largestInteger(int[] nums, int k)
    {
        int n = nums.length;
        int[] countarr = new int[51];

        for(int i = 0; i + k <= n; i++)
        {
            boolean[] seen = new boolean[51];
            for(int j = i; j < i + k; j++)
            {
                seen[nums[j]] = true;
            }
            for(int x = 0; x < 51; x++)
            {
                if(seen[x])
                {
                    countarr[x] += 1;
                }
            }
        }

        for(int x = 50; x >= 0; x--)
        {
            if(countarr[x] == 1)
            {
                return x;
            }
        }

        return -1;
    }
}