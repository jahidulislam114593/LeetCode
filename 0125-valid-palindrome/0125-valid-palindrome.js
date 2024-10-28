/**
 * @param {string} s
 * @return {boolean}
 */

// function isAlphaNumeric(ch){
//     return /^[a-zA-Z0-9]$/.test(ch);
// }

function isAlphaNumeric(ch){
    return (
        (ch >= '0' && ch <= '9') ||
        (ch.toLowerCase() >= 'a' && ch.toLowerCase() <= 'z')
    );
}

var isPalindrome = function(s) {
    let st = 0, end = s.length - 1

    while(st < end)
    {
        while(st < end && !isAlphaNumeric(s[st]))
        {
            st++;
        }
        while(st < end && !isAlphaNumeric(s[end]))
        {
            end--;
        }

        if(s[st].toLowerCase() !== s[end].toLowerCase()) return false;
        st++;
        end--;
    }
    return true;
};