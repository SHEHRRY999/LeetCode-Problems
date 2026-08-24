class Solution:
    def findBound(self, nums, target, findFirst):
        low, high = 0, len(nums) - 1
        result = -1

        while low <= high:
            mid = low + (high - low) // 2

            if nums[mid] == target:
                result = mid
                if findFirst:
                    high = mid - 1
                else:
                    low = mid + 1
            elif nums[mid] < target:
                low = mid + 1
            else:
                high = mid - 1

        return result

    def searchRange(self, nums, target):
        first = self.findBound(nums, target, True)
        last = self.findBound(nums, target, False)
        return [first, last]