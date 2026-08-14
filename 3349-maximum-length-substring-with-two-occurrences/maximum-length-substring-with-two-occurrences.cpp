class Solution
{
public:
    int maximumLengthSubstring(string s)
    {
        int count[26] = {0};
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++)
        {
            char c = s[right];
            int index = c - 'a';
            count[index]++;

            while (count[index] > 2)
            {
                char leftChar = s[left];
                int leftIndex = leftChar - 'a';
                count[leftIndex]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};