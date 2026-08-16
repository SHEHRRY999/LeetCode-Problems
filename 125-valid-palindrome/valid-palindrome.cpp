class Solution {
public:
    bool isalphanumeric(char c){
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while(start < end){
            if(!(isalphanumeric(tolower(s[start])))){
                start ++;
                continue;
            }
            else if(!(isalphanumeric(tolower(s[end])))){
                end --;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};