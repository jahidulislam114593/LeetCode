/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNonDuplicate = function(A) {
    let n = A.length
    if(n == 1) return A[0];
    
    if(A[0]!=A[1]) return A[0];
    if(A[n-1] != A[n-2]) return A[n-1];

    let st = 1, end = n-2;
    while( st <= end)
    {
        let mid = Math.floor(st + (end - st) / 2);
        if(A[mid-1] != A[mid] && A[mid] != A[mid+1]) return A[mid];

        if(mid % 2 == 0)
        {
            //even
            if(A[mid-1] == A[mid])
            {
                //left
                end = mid - 1;
            }else
            {
                st = mid + 1;
            }
        }else
        {
            //odd
            if(A[mid-1] == A[mid])
            {
                //right
                st = mid + 1;
            }else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
};