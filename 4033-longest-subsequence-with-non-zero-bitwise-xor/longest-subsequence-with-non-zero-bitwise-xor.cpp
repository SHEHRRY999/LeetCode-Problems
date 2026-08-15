class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total = 0;
        for(int x : nums){
            total = total ^ x;
        }
        if(total != 0){
            return nums.size();
        }
        bool nonZero = false;
        for(int x :  nums){
            if(x != 0){
                nonZero = true;
            }
        }
        if(nonZero){
            return nums.size() - 1;
        }
        else{
            return 0;
        }
    }
};