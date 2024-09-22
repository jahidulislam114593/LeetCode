class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int val: nums)
        {
            int freq = 0;
            for(int el : nums)
            {
                if(val == el) freq++;
            }
            if(freq > n/2) return val;
        }
        return -1;
    }
};