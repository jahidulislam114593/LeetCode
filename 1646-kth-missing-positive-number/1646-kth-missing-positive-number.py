class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        st, end = 0, len(arr) - 1
        while st <= end:
            mid = st + (end - st) // 2
            missing = arr[mid] - (mid + 1)
            if missing < k:
                st = mid + 1
            else:
                end = mid - 1
        return st + k
