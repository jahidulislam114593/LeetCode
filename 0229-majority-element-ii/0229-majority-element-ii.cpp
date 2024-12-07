class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        vector<int>ls;
        int mn = int(n/3) + 1;
        for(int i = 0; i<n; ++i)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]] == mn)
            {
                ls.push_back(nums[i]);
            }
            if(ls.size() == 2) return ls;
        }
        return ls;
    }
};