/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    let n = nums.length;
    let ans = new Array(n).fill(1);

    for(let i = 1; i<n; i++)
    {
        ans[i] = ans[i-1] * nums[i-1];
    }

    let suffix = 1;
    for(let i = n-2; i>=0; --i)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
};