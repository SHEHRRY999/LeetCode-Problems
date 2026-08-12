class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int expected = 1;
        int n = nums.length; 
        ArrayList<Integer> answer = new ArrayList<>();
        Arrays.sort(nums);
        for (int i = 0; i < nums.length; i++){
            while(expected < nums [i]){
                answer.add(expected);
                expected++;
                
            }
            if(expected == nums [i]){
                expected++;
            }
        }
        while(expected <= n){
            answer.add(expected);
            expected++;
        }
    return answer;
    }
}