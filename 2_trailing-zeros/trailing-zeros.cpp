/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/trailing-zeros
@Language: C++
@Datetime: 16-08-14 12:29
*/

class Solution {
 public:
    // param n : description of n
    // return: description of return 
    long long trailingZeros(long long n) 
    {

        long long cnt = 0LL;
        while(n > 0)
        {
            cnt += n / 5;
            n /= 5;
        }
        
        return cnt;
    }
    
 
    
};
