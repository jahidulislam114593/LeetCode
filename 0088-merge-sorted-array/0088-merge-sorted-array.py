class Solution:
    def merge(self, A: List[int], m: int, B: List[int], n: int) -> None:
        idx = m + n - 1
        i = m - 1
        j = n - 1

        while j >= 0:
            if i >= 0 and A[i] > B[j]:
                A[idx] = A[i]
                i -= 1
            else:
                A[idx] = B[j]
                j -= 1
            
            idx -= 1