class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();

        // 1. longest prefix / Peak 2 1(downfall) 5 4 3 0 0
        for(int i = n - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                idx = i;
                break;
            }
        }
        if(idx == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 2. find the closest value to nums[idx]
        for(int i = n - 1; i > idx; i--)
        {
            if(nums[i] > nums[idx])
            {
                swap(nums[i], nums[idx]);
                break;
            }
        }

        //3. sort the remaining value

        reverse(nums.begin() + idx + 1, nums.end());
    }
};