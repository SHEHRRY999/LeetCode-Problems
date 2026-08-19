class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) 
    {
        unordered_map<int, unordered_set<int>> reservedByRow;

        for (int i = 0; i < reservedSeats.size(); i++)
        {
            vector<int> s = reservedSeats[i];
            reservedByRow[s[0]].insert(s[1]);
        }

        int count = 0;

        for (auto& [row, seatsTaken] : reservedByRow)
        {
            bool left = !seatsTaken.count(2) && !seatsTaken.count(3) && !seatsTaken.count(4) && !seatsTaken.count(5);
            bool mid = !seatsTaken.count(4) && !seatsTaken.count(5) && !seatsTaken.count(6) && !seatsTaken.count(7);
            bool right = !seatsTaken.count(6) && !seatsTaken.count(7) && !seatsTaken.count(8) && !seatsTaken.count(9);

            if (left && right)
            {
                count += 2;
            }
            else if (left || mid || right)
            {
                count += 1;
            }
        }

        count += 2 * (n - (int)reservedByRow.size());

        return count;
    }
};