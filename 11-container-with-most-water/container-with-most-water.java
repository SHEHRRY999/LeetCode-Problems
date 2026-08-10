class Solution {
    public int maxArea(int[] height) {
        int i = 0;
        int j = height.length - 1;
        int max = 0;
        while (i < j) {
            int h = Math.min(height[i], height[j]);
            int width = j - i;
            int total = h * width;
            max = Math.max(max, total);
            if (height[i] < height[j]) {
                i++;
            } 
            else {
                j--;
            }
        }
        return max;
    }
}