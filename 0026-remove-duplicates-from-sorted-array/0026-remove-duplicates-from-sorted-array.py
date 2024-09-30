class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 1
        n = len(nums)
        for j in range(1, n):
            if nums[j] != nums[i-1]:
                nums[i] = nums[j]
                i+=1
        return i