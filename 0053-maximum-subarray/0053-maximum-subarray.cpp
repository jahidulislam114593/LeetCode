class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int subArr = INT_MIN;
        int currentSum = 0;
        for(int val: nums)
        {
            currentSum += val;
            subArr = max(subArr, currentSum);
            if(currentSum < 0)
            {
                currentSum = 0;
            }
        }
        return subArr;
    }
};