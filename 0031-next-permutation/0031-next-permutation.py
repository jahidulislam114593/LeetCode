class Solution:
    def nextPermutation(self, A: List[int]) -> None:
        n = len(A)
        pivot = -1
        for i  in range(n-2, -1, -1):
            if A[i] < A[i+1]:
                pivot = i
                break
        
        if pivot == -1:
            A.reverse()
            return
        
        for i in range(n-1, pivot, -1):
            if A[i] > A[pivot]:
                A[pivot] , A[i] = A[i], A[pivot]
                break
        
        A[pivot+1:] = reversed(A[pivot + 1:])
        