class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 0; int ele;
        for(int i = 0; i<n; i++)
        {
            if(freq == 0)
            {
                ele = nums[i];
            }
            if(nums[i] == ele)
            {
                freq++;
            }else
            {
                freq--;
            }

            if(freq > n/2) return ele;
        }
        return ele;
    }

};