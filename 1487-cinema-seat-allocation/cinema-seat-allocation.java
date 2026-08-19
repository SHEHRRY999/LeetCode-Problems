class Solution {
    public int maxNumberOfFamilies(int n, int[][] reservedSeats) 
    {
        Map<Integer, Set<Integer>> reservedByRow = new HashMap<>();

        for (int[] s : reservedSeats)
        {
            reservedByRow.computeIfAbsent(s[0], k -> new HashSet<>()).add(s[1]);
        }

        int count = 0;

        for (Map.Entry<Integer, Set<Integer>> entry : reservedByRow.entrySet())
        {
            Set<Integer> seatsTaken = entry.getValue();

            boolean left = !seatsTaken.contains(2) && !seatsTaken.contains(3) && !seatsTaken.contains(4) && !seatsTaken.contains(5);
            boolean mid = !seatsTaken.contains(4) && !seatsTaken.contains(5) && !seatsTaken.contains(6) && !seatsTaken.contains(7);
            boolean right = !seatsTaken.contains(6) && !seatsTaken.contains(7) && !seatsTaken.contains(8) && !seatsTaken.contains(9);

            if (left && right)
            {
                count += 2;
            }
            else if (left || mid || right)
            {
                count += 1;
            }
        }

        count += 2 * (n - reservedByRow.size());

        return count;
    }
}