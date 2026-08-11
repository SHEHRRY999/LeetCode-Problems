class Solution:
    def missingInteger(self, nums: list[int]) -> int:
        seqSum = nums[0]
        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1] + 1:
                seqSum += nums[i]
            else:
                break

        while True:
            found = False
            for i in range(len(nums)):
                if seqSum == nums[i]:
                    found = True
                    break
            if not found:
                return seqSum
            seqSum += 1