/**
 * @param {number[]} weights
 * @param {number} days
 * @return {number}
 */

var isPossible = function(arr, n, days, mid)
{
    let load = 0, used = 1;
    for(let i = 0; i<n; i++)
    {
        if(load + arr[i] <= mid)
        {
            load += arr[i];
        }else
        {
            used++;
            load = arr[i];
        }
    }
    return used > days ? false:true;
}

var shipWithinDays = function(arr, days) {
    let n = arr.length;
    let st = Math.max(...arr);
    let sum = 0;
    for(let i = 0; i<n; i++) sum += arr[i];
    let end = sum;

    let ans = 0;
    while(st <= end)
    {
        let mid = Math.floor(st + (end - st) / 2);
        if(isPossible(arr, n, days, mid))
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