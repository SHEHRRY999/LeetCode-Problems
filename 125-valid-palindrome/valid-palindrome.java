class Solution
{
    public boolean isalphanumeric(char c)
    {
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        {
            return true;
        }
        return false;
    }

    public boolean isPalindrome(String s)
    {
        int start = 0;
        int end = s.length() - 1;
        while (start < end)
        {
            if (!(isalphanumeric(Character.toLowerCase(s.charAt(start)))))
            {
                start++;
                continue;
            }
            else if (!(isalphanumeric(Character.toLowerCase(s.charAt(end)))))
            {
                end--;
                continue;
            }
            if (Character.toLowerCase(s.charAt(start)) != Character.toLowerCase(s.charAt(end)))
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
}