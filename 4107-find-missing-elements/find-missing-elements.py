class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        nums.sort()
        result = []
        for i in range(len(nums) - 1):
            gap = nums[i + 1] - nums[i]
            if gap > 1:
                result.extend(range(nums[i] + 1, nums[i + 1]))
        return result