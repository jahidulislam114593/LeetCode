class Solution:
    def singleNonDuplicate(self, A: List[int]) -> int:
        n = len(A)
        if n == 1:
            return A[0]
        
        if A[0] != A[1]:
            return A[0]
        if A[n-1] != A[n-2]:
            return A[n-1]
    

        st = 1 
        end = n - 2
        while st <= end:
            mid = st + (end - st ) // 2
            if A[mid-1] != A[mid] and A[mid] != A[mid+1]:
                return A[mid]
            
            if mid % 2 == 0:
                # even
                if A[mid - 1] == A[mid]:
                    #left
                    end = mid - 1
                else:
                    st = mid + 1
            else:
                if A[mid - 1] == A[mid]:
                    #right
                    st = mid + 1
                else:
                    end = mid - 1
        
        return -1
