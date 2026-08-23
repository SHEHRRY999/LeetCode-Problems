class Solution {
    Set<List<Integer>> unique = new HashSet<>();

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> combination = new ArrayList<>();
        solve(candidates, target, 0, combination, ans);
        return ans;
    }

    private void solve(int[] candidates, int target, int idx, List<Integer> combination, List<List<Integer>> ans) {
        if (target == 0)
        {
            if (unique.add(new ArrayList<>(combination)))
            {
                ans.add(new ArrayList<>(combination));
            }
            return;
        }
        if (target < 0 || idx == candidates.length)
        {
            return;
        }

        combination.add(candidates[idx]);
        solve(candidates, target - candidates[idx], idx + 1, combination, ans);
        solve(candidates, target - candidates[idx], idx, combination, ans);
        combination.remove(combination.size() - 1);
        solve(candidates, target, idx + 1, combination, ans);
    }
}