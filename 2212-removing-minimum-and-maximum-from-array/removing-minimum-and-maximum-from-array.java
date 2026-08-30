class Solution
{
    public int minimumDeletions(int[] nums)
    {
        int n = nums.length;
        if(n == 1)
        {
            return 1;
        }

        int Max = Integer.MIN_VALUE;
        int MaxIndex = 0;
        int Min = Integer.MAX_VALUE;
        int MinIndex = 0;

        for(int i = 0; i < n; i++)
        {
            if(Max < nums[i])
            {
                Max = nums[i];
                MaxIndex = i;
            }
            if(Min > nums[i])
            {
                Min = nums[i];
                MinIndex = i;
            }
        }

        int lo = Math.min(MinIndex, MaxIndex);
        int hi = Math.max(MinIndex, MaxIndex);

        int fromFront = hi + 1;
        int fromBack = n - lo;
        int bothSides = (lo + 1) + (n - hi);

        return Math.min(fromFront, Math.min(fromBack, bothSides));
    }
}