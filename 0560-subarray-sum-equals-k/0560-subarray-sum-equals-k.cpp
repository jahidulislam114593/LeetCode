class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1; // important to store 0,1 
        int prefixSum = 0, cnt = 0;
        for(int i = 0; i<n; ++i)
        {
            prefixSum += nums[i];
            int rem = prefixSum - k;
            cnt += mp[rem];
            mp[prefixSum]++;
        }

        return cnt;
    }
};