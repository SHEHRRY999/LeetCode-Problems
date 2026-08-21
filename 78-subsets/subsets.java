class Solution {
    public void recursiveSubsets(int[] nums, List<Integer> path, List<List<Integer>> result, int i) 
    {
        if (i == nums.length)
        {
            result.add(new ArrayList<>(path));
            return;
        }
        // include nums[i]
        path.add(nums[i]);
        recursiveSubsets(nums, path, result, i + 1);
        path.remove(path.size() - 1);

        // exclude nums[i]
        recursiveSubsets(nums, path, result, i + 1);
    }

    public List<List<Integer>> subsets(int[] nums) 
    {
        List<Integer> path = new ArrayList<>();
        List<List<Integer>> result = new ArrayList<>();
        recursiveSubsets(nums, path, result, 0);
        return result;
    }
}