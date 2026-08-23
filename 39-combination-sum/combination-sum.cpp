class Solution {
public:
    set<vector<int>> Unique;
    void AllPossibleCombinations(vector<int>& candidates, int target, int idx, vector<int> &combination, vector<vector<int>> &ans){
        if(target == 0){
            if(Unique.find(combination) == Unique.end()){
                ans.push_back(combination);
                Unique.insert(combination);
            }
            
            return;
        }
        if(target < 0 || idx == candidates.size()){
            return;
        }
        combination.push_back(candidates[idx]);
        AllPossibleCombinations(candidates, target - candidates[idx], idx + 1, combination, ans);
        AllPossibleCombinations(candidates, target - candidates[idx], idx, combination, ans);
        combination.pop_back();
        AllPossibleCombinations(candidates, target, idx + 1, combination, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        AllPossibleCombinations(candidates, target, 0, combination, ans);
        return ans;
    }
};