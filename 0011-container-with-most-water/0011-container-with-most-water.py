class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        lp = 0
        rp = len(height) - 1

        mx_water = 0
        while lp < rp:
            w = rp - lp
            ht = min(height[lp], height[rp])
            c_water = w * ht
            mx_water = max(mx_water, c_water)

            if height[lp] < height[rp]:
                lp+=1
            else:
                rp-=1
        
        return mx_water
        