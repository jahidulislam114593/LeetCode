/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function(arr) {
    let n = arr.length

    let st = 1, end = n - 2

    while(st <= end)
    {
        let mid = Math.floor(st + (end - st) / 2);
        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;

        if(arr[mid-1] < arr[mid])
        {
            st = mid + 1;
        }else
        {
            end = mid - 1;
        }
    }
    return -1;
};