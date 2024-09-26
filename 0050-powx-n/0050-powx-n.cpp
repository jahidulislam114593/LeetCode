class Solution {
public:
    double myPow(double x, int n) {

        //BruteForce Approch TC-> O(n)
        // double ans = 1;
        // if(n<0)
        // {
        //     // x = 2-> x= 1/2
        //     //n = -2 -> n=-(-2) -> n = 2
        //     x = 1 / x;
        //     n = -n;
        // }
        // for(int i = 0; i<n; i++) ans *= x;

    //Binary Exponentiation TC-> O(logn)
        if(n == 0) return 1;
        if(n == 1) return x;
        long binaryForm = n;
        if(n<0)
        {
            x = 1 / x;
            binaryForm = -binaryForm;
        }

        double ans = 1;
        while(binaryForm != 0)
        {
            if(binaryForm % 2 == 1)
            {
                ans *= x;
            }
            x *= x;
            binaryForm /= 2;
        }

        return ans;
    }
};