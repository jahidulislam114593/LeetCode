class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        int missing = -1;
        for(int i = 0; i<n; ++i)
        {
            if(s.find(nums[i]) != s.end())
            {
                missing = nums[i];
                break;
            }
            s.insert(nums[i]);
        }

        return missing;
    }
};