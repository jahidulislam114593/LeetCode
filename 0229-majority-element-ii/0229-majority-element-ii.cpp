class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq1 = 0, freq2 = 0;
        int ele1, ele2;
        for(int i = 0; i<n; ++i)
        {
            if(freq1 == 0 && ele2 != nums[i])
            {
                ele1 = nums[i];
                freq1 = 1;
            }else if(freq2 == 0 && ele1 != nums[i])
            {
                ele2 = nums[i];
                freq2 = 1;
            }
            else if(ele1 == nums[i]) freq1++;
            else if(ele2 == nums[i]) freq2++;
            else
            {
                freq1--;
                freq2--;
            }
        }

        vector<int>ls;
        freq1 = 0, freq2 = 0;
        for(int i = 0; i<n; ++i)
        {
            if(ele1 == nums[i]) freq1++;
            if(ele2 == nums[i]) freq2++;
        }
        int mn = (n/3) + 1;
        if(freq1 >= mn) ls.push_back(ele1);
        if(freq2 >= mn && ele1 != ele2) ls.push_back(ele2);

        return ls;
    }
};