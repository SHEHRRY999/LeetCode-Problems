class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(int i = 0; i < nums.size(); i++){
            if(nums [i] % k == 0){
                set.insert(nums [i]);
            }
        } 
        int j = 1;
        while(true){
            int value = j * k;
            if(set.find(value) == set.end()){
                return value;
            }
            j++;
        }       
    }
};