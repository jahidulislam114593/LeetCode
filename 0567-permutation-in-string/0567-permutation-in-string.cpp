class Solution {
public:
    bool Freq(int freq1[26], int freq2[26])
    {
        for(int i = 0; i<26; i++)
        {
            if(freq1[i] != freq2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0; i < s1.length(); i++)
        {
            int idx = s1[i] - 'a';
            freq[idx]++;
        }

        int windoSize = s1.length();
        for(int i = 0; i<s2.length(); i++)
        {
            int windoFreq[26] = {0};
            int windoIdx = 0, idx = i;
            while(windoIdx < windoSize && idx < s2.length())
            {
                windoFreq[s2[idx] - 'a']++;
                windoIdx++;
                idx++;
            }
            if(Freq(freq, windoFreq))
            {
                return true;
            }
        }
        return false;
    }
};