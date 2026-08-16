class Solution:
    def isalphanumeric(self, c: str) -> bool:
        if ('a' <= c <= 'z') or ('0' <= c <= '9'):
            return True
        return False

    def isPalindrome(self, s: str) -> bool:
        start = 0
        end = len(s) - 1
        while start < end:
            if not self.isalphanumeric(s[start].lower()):
                start += 1
                continue
            elif not self.isalphanumeric(s[end].lower()):
                end -= 1
                continue
            if s[start].lower() != s[end].lower():
                return False
            start += 1
            end -= 1
        return True