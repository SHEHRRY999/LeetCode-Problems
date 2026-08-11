class Solution {
    public int missingInteger(int[] nums) {
        int n = nums.length;
        int sequentialSum = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1)
                sequentialSum += nums[i];
            else
                break;
        }
        while (true) {
            boolean found = false;
            for (int i = 0; i < n; i++) {
                if (nums[i] == sequentialSum) {
                    found = true;
                    break;
                }
            }
            if (!found)
                return sequentialSum;
            sequentialSum++;
        }
    }
}
