class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size() > 0 && s.find(part) < s.size()){
            int start = s.find(part);
            s.erase(start, part.size());
        }
        return s;
    }
};