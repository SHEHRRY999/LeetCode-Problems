class Solution:
    def maxNumberOfFamilies(self, n: int, reservedSeats: List[List[int]]) -> int:
        reservedByRow = {}

        for row, seat in reservedSeats:
            if row not in reservedByRow:
                reservedByRow[row] = set()
            reservedByRow[row].add(seat)

        count = 0

        for row, seatsTaken in reservedByRow.items():
            left = 2 not in seatsTaken and 3 not in seatsTaken and 4 not in seatsTaken and 5 not in seatsTaken
            mid = 4 not in seatsTaken and 5 not in seatsTaken and 6 not in seatsTaken and 7 not in seatsTaken
            right = 6 not in seatsTaken and 7 not in seatsTaken and 8 not in seatsTaken and 9 not in seatsTaken

            if left and right:
                count += 2
            elif left or mid or right:
                count += 1

        count += 2 * (n - len(reservedByRow))

        return count