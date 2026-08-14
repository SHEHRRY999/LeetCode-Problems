class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        count = [0] * 26
        left = 0
        max_len = 0

        for right in range(len(s)):
            c = s[right]
            index = ord(c) - ord('a')
            count[index] += 1

            while count[index] > 2:
                left_char = s[left]
                left_index = ord(left_char) - ord('a')
                count[left_index] -= 1
                left += 1

            max_len = max(max_len, right - left + 1)

        return max_len