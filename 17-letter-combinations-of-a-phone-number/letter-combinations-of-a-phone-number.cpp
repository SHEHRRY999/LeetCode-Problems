class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;

        vector<string> letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        result.push_back("");

        for (int i = 0; i < digits.size(); i++) {
            int num = digits[i] - '0';
            string possible = letters[num];
            int oldSize = result.size();

            for (int j = 0; j < oldSize; j++) {
                string combo = result[j];

                result[j] = combo + possible[0];

                for (int k = 1; k < possible.size(); k++) {
                    result.push_back(combo + possible[k]);
                }
            }
        }

        return result;
    }
};