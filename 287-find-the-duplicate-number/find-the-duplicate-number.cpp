class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> repeated;
        for (int i = 0; i < nums.size(); i++){
            if(repeated.find(nums[i]) != repeated.end()){
                return nums [i];
            }
            repeated.insert(nums [i]);
        }
        return -1;
    }
};