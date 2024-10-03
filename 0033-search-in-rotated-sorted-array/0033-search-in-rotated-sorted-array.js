/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let st = 0, end = nums.length - 1

    while(st <= end)
    {
        let mid = Math.floor(st + (end - st) / 2);
        if(nums[mid] == target) return mid;

        if(nums[st] <= nums[mid]) // left side sorted
        {
            if(nums[st] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }else
            {
                st = mid + 1;
            }
        }else // right side sorted
        {
            if(nums[mid] <= target && target <= nums[end])
            {
                st = mid + 1;
            }else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
};