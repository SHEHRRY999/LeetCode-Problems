class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = 0
        ans = 0
        for num in nums:
            if freq == 0:
                ans = num
                freq = 1
            elif ans == num:
                freq += 1
            else:
                freq -= 1
        return ans