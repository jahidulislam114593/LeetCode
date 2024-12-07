class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        for(int i = 0; i<n; ++i)
        {
            mpp[nums[i]]++;
        }
        for(auto val : mpp)
        {
            if(val.second > (n/2)) return val.first;
        }

        return -1;
    }

};