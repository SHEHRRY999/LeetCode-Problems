class Solution {
public:
    bool checking(vector<int>& nums, int k, int index){
        for(int i = 0; i < nums.size(); i++){
            if(index != i){
                if(nums[index] == nums[i]){
                    if(abs(index - i) <= k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(int i = 0; i < nums.size(); i++) {
            if(set.find(nums[i]) != set.end()) {
                int index = i;
                if(checking(nums, k, index)){
                    return true;
                }
            } 
            else {
                set.insert(nums[i]); 
            }
        }
        return false;
    }
};