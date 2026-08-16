class Solution {
public:
    bool issame(int freq1[], int freq2[]){
        for(int i = 0; i < 26; i++)
        {
            if(freq1[i] != freq2[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0; i < s1.size(); i++)
        {
            freq[s1[i] - 'a']++;
        }
        int windowsize = s1.size();
        for(int j = 0; j < s2.size(); j++)
        {
            int windowfreq[26] = {0};
            int idx = j;
            int windowidx = 0;
            while(windowidx < windowsize && idx < s2.length())
            {
                windowfreq[s2[idx] - 'a']++;
                idx++;
                windowidx++;
            }
            if(issame(freq, windowfreq))
            {
                return true;
            }
        }
        return false;
    }
};