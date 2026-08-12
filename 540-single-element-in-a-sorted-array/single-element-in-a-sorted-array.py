class Solution:
    def singleNonDuplicate(self, nums: list[int]) -> int:
        start = 0
        end = len(nums) - 1
        n = len(nums)

        if n == 1:
            return nums[0]

        while start <= end:
            mid = start + (end - start) // 2

            if mid == 0 and nums[0] != nums[1]:
                return nums[mid]
            if mid == n - 1 and nums[n - 1] != nums[n - 2]:
                return nums[mid]
            if nums[mid - 1] != nums[mid] and nums[mid] != nums[mid + 1]:
                return nums[mid]

            if mid % 2 == 0:
                if nums[mid - 1] == nums[mid]:
                    end = mid - 1
                else:
                    start = mid + 1
            else:
                if nums[mid - 1] == nums[mid]:
                    start = mid + 1
                else:
                    end = mid - 1

        return -1