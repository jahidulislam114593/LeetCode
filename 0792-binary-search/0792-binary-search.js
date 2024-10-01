/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let st = 0;
    let en = nums.length - 1;

    while(st <= en)
    {
        let mid = Math.floor(st + (en - st) / 2);
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target)
        {
            st = mid + 1;
        }else
        {
            en = mid - 1;
        }
    }
    return -1;
};