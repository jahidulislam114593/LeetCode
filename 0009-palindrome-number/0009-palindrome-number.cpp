class Solution {
public:
    bool isPalindrome(int n) {
        if(n < 0) return 0;
        int dup = n;
        long long rev = 0;
        while(n != 0)
        {
            int ld = n % 10;
            n/=10;
            
            rev = (rev*10) + ld;
        }
        if(dup == rev) return 1;
        else return 0;
    }
};