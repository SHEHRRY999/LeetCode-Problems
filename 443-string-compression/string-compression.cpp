class Solution {
public:
    int compress(vector<char>& chars) {
        int read = 0;
        int write = 0;
        int n = chars.size();

        while (read < n) {
            char element = chars[read];
            int count = 0;

            while (read < n && chars[read] == element) {
                read++;
                count++;
            }

            chars[write] = element;
            write++;

            if (count > 1) {
                string strcount = to_string(count);
                for (int i = 0; i < strcount.length(); i++) {
                    chars[write] = strcount[i];
                    write++;
                }
            }
        }

        return write;
    }
};