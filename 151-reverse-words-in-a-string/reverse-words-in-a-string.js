/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let arr = s.split(' ');
     
    let revS = "";

    for(let i = arr.length -1; i >=0; i--){
        if(arr[i] == "") continue;
        if(revS.length > 0) revS += " ";
        revS += arr[i];
    } 
    return revS;
};