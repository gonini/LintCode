/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/flip-bits
@Language: C++
@Datetime: 16-11-12 12:59
*/

class Solution {
public:
    /**
     *@param a, b: Two integer
     *return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code here
        int c = (a ^ b);
        int ret = 0;
        for(int i = 0; i < 32; i++){
            if((c & (1 << i)) > 0){
                ret+=1;
            }
        }
        
        if(a > 0 && b < 0) {
            ret +=1;
        }
        
        if(b > 0 && 0 > a) {
            ret +=1;
        }
        
        return ret;
    }
};