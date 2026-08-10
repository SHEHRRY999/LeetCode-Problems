class Solution:
    def maxArea(self, height: list[int]) -> int:
        i = 0
        j = len(height) - 1
        max_area = 0
        while i < j:
            h = min(height[i], height[j])
            width = j - i
            total = h * width
            max_area = max(max_area, total)
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1
        return max_area