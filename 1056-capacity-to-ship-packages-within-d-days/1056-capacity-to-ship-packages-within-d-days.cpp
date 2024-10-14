class Solution {
public:

    bool isPossible(vector<int> &arr, int n, int days, int mid)
    {
        int load = 0, used = 1;
        for(int i = 0; i<n; i++)
        {
            if(load+arr[i] <= mid)
            {
                load += arr[i];
            }else
            {
                used++;
                load = arr[i];
            }
        }
        return used > days ? false : true;
    }

    int shipWithinDays(vector<int>& arr, int days) {
        int n = arr.size();
        int st = *max_element(arr.begin(), arr.end());
        int sum = 0;
        for(int i : arr) sum += i;
        int end = sum;
        int ans = 0;
        while(st <= end)
        {
            int mid  = st + (end - st) / 2;
            if(isPossible(arr, n, days, mid))
            {
                ans = mid;
                end = mid - 1;
            }else
            {
                st = mid + 1;
            }
        }
        return ans;
    }
};