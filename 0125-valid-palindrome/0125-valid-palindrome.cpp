class Solution {
public:
    bool palindromeString(int i, string &s)
    {
        int n = s.size();
        if(i >= n/2) return true;
        if(s[i] != s[n-i-1]) return false;
        return palindromeString(i+1, s);
    }

    bool isPalindrome(string s) {
        string filterString = "";
        for(char c: s)
        {
            if(isalnum(c))
            {
                filterString += tolower(c);
            }
        }
        return palindromeString(0,filterString);
    }
};