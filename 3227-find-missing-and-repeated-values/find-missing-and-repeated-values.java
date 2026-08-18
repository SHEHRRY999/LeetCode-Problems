class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        Set<Integer> forA = new HashSet<>();
        int a = 0;
        int n = grid.length;
        long actualSum = 0;
        long expectedSum = (long) n * n * (n * n + 1) / 2;

        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                actualSum += grid[i][j];
                if (forA.contains(grid[i][j])) {
                    a = grid[i][j];
                }
                forA.add(grid[i][j]);
            }
        }

        long b = expectedSum - actualSum + a;
        return new int[]{a, (int) b};
    }
}