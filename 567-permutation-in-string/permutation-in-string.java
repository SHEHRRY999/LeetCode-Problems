class Solution
{
    private boolean isSame(int[] freq1, int[] freq2)
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
            {
                return false;
            }
        }

        return true;
    }

    public boolean checkInclusion(String s1, String s2)
    {
        int[] freq = new int[26];

        for (int i = 0; i < s1.length(); i++)
        {
            freq[s1.charAt(i) - 'a']++;
        }

        int windowSize = s1.length();

        for (int j = 0; j < s2.length(); j++)
        {
            int[] windowFreq = new int[26];
            int idx = j;
            int windowIdx = 0;

            while (windowIdx < windowSize && idx < s2.length())
            {
                windowFreq[s2.charAt(idx) - 'a']++;
                idx++;
                windowIdx++;
            }

            if (isSame(freq, windowFreq))
            {
                return true;
            }
        }

        return false;
    }
}