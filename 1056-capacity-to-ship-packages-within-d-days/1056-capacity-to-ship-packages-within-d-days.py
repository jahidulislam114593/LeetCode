class Solution:
    def isPossible(self, arr, n, days, mid):
        load = 0
        used = 1
        for i in range(0, n):
            if load + arr[i] <= mid:
                load += arr[i]
            else:
                load = arr[i]
                used += 1
        
        if used > days:
            return False
        else:
            return True

    def shipWithinDays(self, arr: List[int], days: int) -> int:
        n = len(arr)
        st = max(arr)
        end = sum(arr)
        ans = 0  # Initialize ans here
        
        while st <= end:
            mid = st + (end - st) // 2
            if self.isPossible(arr, n, days, mid):
                ans = mid
                end = mid - 1
            else:
                st = mid + 1
        return ans
