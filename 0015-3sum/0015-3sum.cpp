class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;

        for(int i = 0; i<n; ++i)
        {
            int j = i + 1;
            int k = n - 1;
            while(k > j)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) j++; // -ve
                else if(sum > 0) k--; // +ve
                else{
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    // sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                    j++, k--;
                    while(k > j && nums[j] == nums[j-1]) j--;
                    while(k > j && nums[k] == nums[k+1]) k++;
                }
            }
        }
        return ans;
    }
};