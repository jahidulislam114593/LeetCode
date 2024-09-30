class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(int i = 0; i<nums.size(); i++) st.insert(nums[i]);
        int idx = 0;
        for(int i : st) 
        {
            nums[idx] = i;
            idx++;
        }
        return idx;
    }
};