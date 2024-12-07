class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i = 0; i<n; ++i)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue; // if same ele as previous
            int j = i + 1;
            int k = n - 1;
            while(k > j)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0)
                {
                    j++;
                }else if(sum > 0)
                {
                    k--;
                }else
                {
                    vector<int> tmp = {nums[i], nums[j], nums[k]};
                    ans.push_back(tmp);
                    k--;
                    j++;
                    while(k > j && nums[j] == nums[j-1]) j++;
                    while(k > j && nums[k] == nums[k+1]) k--;
                }
           }
        }
        return ans;
    }
};