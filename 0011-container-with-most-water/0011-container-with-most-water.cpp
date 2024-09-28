class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int mx_water = 0;
        int lp = 0, rp = n - 1;
        while(lp < rp)
        {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int c_water = w * ht;
            mx_water = max(mx_water, c_water);

            height[lp] < height[rp] ? lp++ : rp--;
        }   
        return mx_water;
    }
};