class Solution {
public:
    void Recursivesubsets(vector<int>& nums, vector<int>& path, vector<vector<int>>& result, int i)
    {
        if (i == nums.size())
        {
            result.push_back(path);
            return;
        }
        
        path.push_back(nums[i]);
        Recursivesubsets(nums, path, result, i + 1);
        path.pop_back();

        
        Recursivesubsets(nums, path, result, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int> path;
        vector<vector<int>> result;
        Recursivesubsets(nums, path, result, 0);
        return result;
    }
};