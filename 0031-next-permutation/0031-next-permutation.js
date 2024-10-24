/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var nextPermutation = function(A) {
    let n = A.length;
    let pivot = -1;
    for(let i = n - 2; i >= 0; --i)
    {
        if(A[i] < A[i+1])
        {
            pivot = i;
            break;
        }
    }

    if(pivot === -1)
    {
        let i = 0, j = n - 1;
        while(j > i)
        {
            let tmp = A[j];
            A[j] = A[i];
            A[i] = tmp;
            i++;
            j--; 
        }
        return;
    }

    for(let i = n - 1; i > pivot; --i)
    {
        if(A[i] > A[pivot])
        {
            let tmp = A[pivot];
            A[pivot] = A[i];
            A[i] = tmp;
            break;
        }
    }

    let i = pivot + 1;
    let j = n - 1;
    while(j>i)
    {
        let tmp = A[j];
        A[j] = A[i];
        A[i] = tmp;
        i++;
        j--; 
    }
};