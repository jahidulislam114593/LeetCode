/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findKthPositive = function(arr, k) {
    let st = 0, end = arr.length - 1;
    while (st <= end) {
        let mid = st + Math.floor((end - st) / 2);
        let missing = arr[mid] - (mid + 1);
        if (missing < k) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return st + k;
};
