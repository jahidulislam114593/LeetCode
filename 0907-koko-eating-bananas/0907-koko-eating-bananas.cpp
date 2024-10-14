class Solution {
public:

    bool isPossible(vector<int>&piles, int n, int h, int mid)
    {
        long long hourNeeded = 0;
        for(int i = 0; i<n; i++)
        {
            hourNeeded += (piles[i] + mid - 1) / mid;
        }
        return hourNeeded <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        long long st = 1;
        long long end = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while(st <= end)
        {
            long long mid = st + (end - st )/ 2;
            if(isPossible(piles, n, h, mid))
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