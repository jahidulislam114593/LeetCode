/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    if(n == 0) return 1;
    if(n == 1) return x;
    let b = n;
    let ans = 1;
    if(n < 0)
    {
        x = 1 / x;
        b = -b;
    }
    while(b != 0)
    {
        if(b & 1) ans *= x;
        x *= x;
        b /= 2;
    }
    return ans;
};