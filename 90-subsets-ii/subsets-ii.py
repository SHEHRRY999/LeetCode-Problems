class Solution:
    def recursive_subsets(self, nums: list[int], all_subsets: list[list[int]], ans: list[int], i: int) -> None:
        if i == len(nums):
            all_subsets.append(ans.copy())
            return

        ans.append(nums[i])
        self.recursive_subsets(nums, all_subsets, ans, i + 1)

        ans.pop()
        idx = i + 1
        while idx < len(nums) and nums[idx] == nums[idx - 1]:
            idx += 1
        self.recursive_subsets(nums, all_subsets, ans, idx)

    def subsetsWithDup(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        all_subsets = []
        ans = []
        self.recursive_subsets(nums, all_subsets, ans, 0)
        return all_subsets