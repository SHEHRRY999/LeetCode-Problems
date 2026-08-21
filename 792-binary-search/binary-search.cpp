class Solution {
public:
    int recursivebinarysearch(vector<int>& nums, int target, int start, int end){
        if(start <= end){
            int mid = start + (end - start) / 2;
            if(nums [mid] == target){
                return mid;
            }
            else if (nums [mid] >= target){
                return recursivebinarysearch(nums, target, start, mid - 1); 
            }
            else{
                return recursivebinarysearch(nums, target, mid + 1, end); 
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        return recursivebinarysearch(nums, target, st, end); 
    }
};