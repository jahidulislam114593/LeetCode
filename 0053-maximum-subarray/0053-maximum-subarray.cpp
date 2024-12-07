class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int currentSum = 0;
        for(int val : nums)
        {
            currentSum += val;
            maxi = max(currentSum, maxi);
            if(currentSum < 0) currentSum = 0;
        }
        return maxi;
    }
};