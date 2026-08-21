class Solution {
public:
    void Recursivesubsets(vector<int>& nums, vector<vector<int>> &allsubsets, vector<int> &ans, int i){
        if(i == nums.size()){
            allsubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        Recursivesubsets(nums, allsubsets, ans, i + 1);

        ans.pop_back();
        int idx = i + 1;
        while(idx < nums.size() && nums[idx] == nums[idx - 1]){
            idx++;
        }
        Recursivesubsets(nums, allsubsets, ans, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allsubsets;
        vector<int> ans;
        Recursivesubsets(nums, allsubsets, ans, 0);
        return allsubsets;
    }
};