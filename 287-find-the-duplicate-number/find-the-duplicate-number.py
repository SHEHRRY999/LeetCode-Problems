class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        repeated = set()
        for i in range(len(nums)):
            if nums[i] in repeated:
                return nums[i]
            repeated.add(nums[i])
        return -1