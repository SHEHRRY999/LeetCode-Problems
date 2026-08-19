class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        n = len(nums)
        count = 0
        prefixSum = [0] * n

        prefixSum[0] = nums[0]
        for i in range(1, n):
            prefixSum[i] = prefixSum[i - 1] + nums[i]

        m = {}  # PS, freq

        for j in range(n):
            if prefixSum[j] == k:
                count += 1

            val = prefixSum[j] - k
            if val in m:
                count += m[val]

            if prefixSum[j] not in m:
                m[prefixSum[j]] = 0
            m[prefixSum[j]] += 1

        return count