class Solution {
    public int longestSubsequence(int[] nums) {
        int total = 0;
        for(int x : nums){
            total = total ^ x;
        }
        if(total != 0){
            return nums.length;
        }
        boolean nonZero = false;
        for(int x :  nums){
            if(x != 0){
                nonZero = true;
            }
        }
        if(nonZero){
            return nums.length - 1;
        }
        else{
            return 0;
        }
    }
}