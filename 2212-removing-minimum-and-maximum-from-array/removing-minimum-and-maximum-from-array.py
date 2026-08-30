class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return 1

        maxIndex = nums.index(max(nums))
        minIndex = nums.index(min(nums))

        lo = min(minIndex, maxIndex)
        hi = max(minIndex, maxIndex)

        fromFront = hi + 1
        fromBack = n - lo
        bothSides = (lo + 1) + (n - hi)

        return min(fromFront, fromBack, bothSides)