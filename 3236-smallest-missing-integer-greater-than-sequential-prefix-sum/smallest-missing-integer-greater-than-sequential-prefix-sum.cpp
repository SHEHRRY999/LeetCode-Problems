class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int seqSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                seqSum += nums[i];
            } else {
                break;
            }
        }

        while (true) {
            bool found = false;
            for (int i = 0; i < nums.size(); i++) {
                if (seqSum == nums[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return seqSum;
            }
            seqSum++;
        }
    }
};