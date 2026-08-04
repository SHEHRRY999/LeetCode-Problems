class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        for (int i = 0; i < nums.size() - 1; i++) {
            int gap = nums[i + 1] - nums[i];
            if (gap > 1) {
                for (int x = nums[i] + 1; x < nums[i + 1]; x++) {
                    result.push_back(x);
                }
            }
        }
        return result;
    }
};