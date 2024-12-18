class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        vector<int>ans;
        for(int i = 0; i<n; ++i)
        {
            int first = nums[i];
            int second = target - first;

            if(mpp.find(second) != mpp.end())
            {
                ans.push_back(i);
                ans.push_back(mpp[second]);
                break;
            }
            mpp[first] = i;
        }
        
        return ans;

    }
};