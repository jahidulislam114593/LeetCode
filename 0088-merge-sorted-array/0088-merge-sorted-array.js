/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(A, m, B, n) {
    let idx = m + n - 1;
    let i = m - 1;
    let j = n - 1;

    while(j>=0)
    {
        if(i>=0 && A[i] > B[j])
        {
            A[idx] = A[i--];
        }else
        {
            A[idx] = B[j--];
        }
        idx--;
    }
};