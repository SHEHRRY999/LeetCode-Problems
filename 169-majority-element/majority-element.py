class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        freq = 1
        ans = nums[0]
        if freq > len(nums) // 2:
            return ans
        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1]:
                freq += 1
            else:
                freq = 1
                ans = nums[i]
            if freq > len(nums) // 2:
                return ans
        return -1