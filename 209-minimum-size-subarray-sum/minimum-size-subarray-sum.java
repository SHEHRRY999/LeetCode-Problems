class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int left = 0;
        int total = 0;
        int n = nums.length;
        int minlen = Integer.MAX_VALUE;
        for(int right = 0; right < n; right++){
            total += nums [right];
            while (total >= target){
                minlen = Math.min(minlen, right - left + 1);
                total -= nums [left];
                left++;
            }
        }
        return minlen == Integer.MAX_VALUE? 0 : minlen;

    }
}