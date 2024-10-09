/**
 * @param {number[]} nums
 * @return {number}
 */
var missingInteger = function(arr) {
    let sum = arr[0];
    let n = arr.length;

    for (let i = 1; i < n; i++) {
        if (arr[i] === arr[i - 1] + 1) {
            sum += arr[i];
        } else {
            break;
        }
    }

    let missing = sum;
    let found = true;

    while (found) {
        found = false;
        for (let i = 0; i < n; i++) {
            if (arr[i] === missing) {
                missing++;
                found = true;
                break;
            }
        }
    }
    return missing;
};