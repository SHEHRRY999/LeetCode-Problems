class Solution:
    def missingMultiple(self, nums, k):
        s = set()
        for num in nums:
            if num % k == 0:
                s.add(num)

        j = 1
        while True:
            value = j * k
            if value not in s:
                return value
            j += 1