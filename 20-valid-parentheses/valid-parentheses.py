class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        for c in s:
            if c == '(' or c == '{' or c == '[':
                st.append(c)
            else:
                if len(st) == 0:
                    return False
                top = st[-1]
                if (top == '{' and c == '}') or \
                   (top == '(' and c == ')') or \
                   (top == '[' and c == ']'):
                    st.pop()
                else:
                    return False
        return len(st) == 0