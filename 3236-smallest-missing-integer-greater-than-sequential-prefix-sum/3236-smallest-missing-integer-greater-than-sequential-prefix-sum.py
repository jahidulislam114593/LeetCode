class Solution:
    def missingInteger(self, arr: List[int]) -> int:
        sum = arr[0]
        n = len(arr)

        for i in range(1,n):
            if arr[i] == arr[i-1] + 1:
                sum += arr[i]
            else: 
                break
        
        missing = sum
        found = True

        while found:
            found = False
            for i in range(0, n):
                if arr[i] == missing:
                    missing += 1
                    found = True
                    break
        
        return missing