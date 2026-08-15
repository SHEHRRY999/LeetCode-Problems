class Solution:
    def longestSubsequence(self, nums: List[int]) -> int:
        total = 0
        for x in nums:
            total = total ^ x

        if total != 0:
            return len(nums)

        has_nonzero = False
        for x in nums:
            if x != 0:
                has_nonzero = True

        if has_nonzero:
            return len(nums) - 1

        return 0