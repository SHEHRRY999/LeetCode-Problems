class Solution {
public:
    bool isPalindrome(string s){
        string s2 = s;
        reverse(s2.begin(), s2.end());
        if(s == s2){
            return true;
        }
        return false;
    }
    void GetAllParts(string s, vector<vector<string>> &ans, vector<string> &parts){
        if(s.size() == 0){
            ans.push_back(parts);
            return;
        }
        for(int i = 0; i < s.size(); i++){
            string part = s.substr(0, i + 1);
            if(isPalindrome(part)){
                parts.push_back(part);
                GetAllParts(s.substr(i + 1), ans, parts);
                parts.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> parts;
        GetAllParts(s, ans, parts);
        return ans;
    }
};