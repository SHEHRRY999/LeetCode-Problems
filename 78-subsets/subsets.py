class Solution:
    def recursive_subsets(self, nums: list[int], path: list[int], result: list[list[int]], i: int) -> None:
        if i == len(nums):
            result.append(path.copy())
            return

        path.append(nums[i])
        self.recursive_subsets(nums, path, result, i + 1)
        path.pop()

   
        self.recursive_subsets(nums, path, result, i + 1)

    def subsets(self, nums: list[int]) -> list[list[int]]:
        path = []
        result = []
        self.recursive_subsets(nums, path, result, 0)
        return result