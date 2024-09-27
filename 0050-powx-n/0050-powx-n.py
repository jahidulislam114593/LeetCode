class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0 :
            return 1
        if n == 1 :
            return x
        b = n
        ans = 1

        if n < 0:
            x = 1 / x
            b = -b
        
        while b > 0:
            if b & 1:
                ans *= x
            x *= x
            b //= 2
        
        return ans