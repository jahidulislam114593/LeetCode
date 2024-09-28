/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let mx_water = 0;
    let n = height.length;
    let lp = 0, rp = n - 1;
    while(lp < rp)
    {
        let w = rp - lp;
        let ht = Math.min(height[lp], height[rp]);
        let c_water = w * ht;
        mx_water = Math.max(mx_water, c_water);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return mx_water;
};