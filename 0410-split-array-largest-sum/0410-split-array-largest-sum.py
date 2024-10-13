class Solution:
    def isPossible(self, nums, n, k, mid):
        time = 0
        painters = 1
        for i in range(n):
            if time + nums[i] <= mid:
                time += nums[i]
            else:
                painters += 1
                time = nums[i]
        return painters <= k

    def splitArray(self, nums: list[int], k: int) -> int:
        n = len(nums)
        st = max(nums)  
        total_sum = sum(nums)  
        end = total_sum
        ans = 0

        while st <= end:
            mid = (st + end) // 2  
            if self.isPossible(nums, n, k, mid):
                ans = mid
                end = mid - 1
            else:
                st = mid + 1

        return ans
