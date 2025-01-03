class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>m;
        m[0] = 1;
        int prefix = 0, cnt = 0;

        for(int i = 0; i<n; ++i)
        {
            prefix += nums[i];
            int rem = prefix - k;
            
            cnt += m[rem];
            m[prefix]++;
        }

        return cnt;
    }
};