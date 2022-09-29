/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let v = Math.abs(x);
    let ans = 0;
    
    while(v!=0){
        ans = ans*10 + v%10;
        v = Math.floor(v/10);
        
    }
    
    return (ans>(2**31)-1) || (ans<(-2)**31) ? 0 : ans*Math.sign(x);
};