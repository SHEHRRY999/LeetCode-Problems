class Solution
{
public:
    int minimumDeletions(vector<int>& nums)
    {
        int n = nums.size();
        if(n == 1)
        {
            return 1;
        }

        int Max = INT_MIN;
        int MaxIndex = 0;
        int Min = INT_MAX;
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

        int lo = min(MinIndex, MaxIndex);
        int hi = max(MinIndex, MaxIndex);

        int fromFront = hi + 1;
        int fromBack = n - lo;
        int bothSides = (lo + 1) + (n - hi);

        return min({fromFront, fromBack, bothSides});
    }
};