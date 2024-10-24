/**
 * @param {number[]} A
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var nextPermutation = function(A) {
    let n = A.length;
    let pivot = -1;

    // Step 1: Find the pivot element
    for (let i = n - 2; i >= 0; --i) {
        if (A[i] < A[i + 1]) {
            pivot = i;
            break;
        }
    }

    // Step 2: If no pivot is found, reverse the entire array
    if (pivot === -1) {
        reverse(A, 0, n - 1);
        return;
    }

    // Step 3: Find the next larger element to swap with the pivot
    for (let i = n - 1; i > pivot; --i) {
        if (A[i] > A[pivot]) {
            [A[pivot], A[i]] = [A[i], A[pivot]];  // Swap using destructuring
            break;
        }
    }

    // Step 4: Reverse the elements to the right of the pivot
    reverse(A, pivot + 1, n - 1);
};

// Helper function to reverse elements in the array
function reverse(arr, start, end) {
    while (start < end) {
        [arr[start], arr[end]] = [arr[end], arr[start]];  // Swap using destructuring
        start++;
        end--;
    }
}
