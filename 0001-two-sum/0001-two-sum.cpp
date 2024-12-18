class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> arr;

        for(int i = 0; i<n; i++)
        {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int st = 0, end = n - 1;

        while(st < end)
        {
            int sum = arr[st].first + arr[end].first;
            if(sum > target) end--;
            else if(sum < target) st++;
            else
            {
                return {arr[st].second, arr[end].second};
            }
        }
        return {};
    }
};