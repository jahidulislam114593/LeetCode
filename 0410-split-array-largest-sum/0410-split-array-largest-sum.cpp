class Solution {
public:
    bool isPossible(vector<int>&nums, int n, int m, int mid)
    {
        int painter = 1, time = 0;
        for(int i = 0; i<n; i++)
        {
            if(time + nums[i] <= mid)
            {
                time += nums[i];
            }else
            {
                painter++;
                time = nums[i];
            }
        }
        return painter > m ? false : true;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) sum += nums[i];

        int st = *max_element(nums.begin(), nums.end()), end = sum, ans = -1;

        while(st <= end) {
            int mid = st + (end - st) / 2;
            if(isPossible(nums, n, k, mid)) {
                ans = mid;
                end = mid - 1; 
            } else {
                st = mid + 1; 
            }
        }
        return ans;
    }
};
