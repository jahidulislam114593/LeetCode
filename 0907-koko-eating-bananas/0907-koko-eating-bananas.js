/**
 * @param {number[]} piles
 * @param {number} h
 * @return {number}
 */
var minEatingSpeed = function(piles, h) {

    function isPossible(piles, h, mid) {
        let hourNeeded = 0;
        for (let i = 0; i < piles.length; i++) {
            hourNeeded += Math.ceil(piles[i] / mid);  
        }
        return hourNeeded <= h;
    }

    let st = 1;
    let end = Math.max(...piles);  
    let ans = 0;

    while (st <= end) {
        let mid = Math.floor(st + (end - st) / 2);
        if (isPossible(piles, h, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return ans;
};
