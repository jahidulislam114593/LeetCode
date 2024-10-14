class Solution:
    def isPossible(self, piles: List[int], h: int, mid: int) -> bool:
        hourNeeded = 0
        for pile in piles:
            hourNeeded += (pile + mid - 1) // mid  
        return hourNeeded <= h

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        st = 1
        end = max(piles)  
        ans = 0
        
        while st <= end:
            mid = (st + end) // 2
            if self.isPossible(piles, h, mid):
                ans = mid
                end = mid - 1
            else:
                st = mid + 1

        return ans
