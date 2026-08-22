class Solution {
    public void getPermutations(int[] nums, List<List<Integer>> ans, int idx) 
    {
        if (idx == nums.length)
        {
            List<Integer> perm = new ArrayList<>();
            for (int num : nums)
            {
                perm.add(num);
            }
            ans.add(perm);
            return;
        }
        for (int i = idx; i < nums.length; i++)
        {
            swap(nums, idx, i);
            getPermutations(nums, ans, idx + 1);
            swap(nums, idx, i);
        }
    }

    private void swap(int[] nums, int a, int b) 
    {
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }

    public List<List<Integer>> permute(int[] nums) 
    {
        List<List<Integer>> ans = new ArrayList<>();
        getPermutations(nums, ans, 0);
        return ans;
    }
}