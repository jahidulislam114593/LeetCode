/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */

let isPossible = (nums, n, k, mid) => {
    let time = 0, painter = 1;
    for (let i = 0; i < n; i++) {
        if (time + nums[i] <= mid) {
            time += nums[i];
        } else {
            painter++;
            time = nums[i];
        }
    }
    return painter <= k;
};


var splitArray = function(nums, k) {
    let n = nums.length
    let st = Math.max(...nums);
    let sum = 0;
    for(let i = 0; i<n; i++) sum += nums[i];
    let end = sum;

    while(st <= end)
    {
        let mid = Math.floor(st + (end - st) / 2);
        if(isPossible(nums, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }else
        {
            st = mid + 1;
        }
    }
    return ans;
};