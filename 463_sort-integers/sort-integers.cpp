/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/sort-integers
@Language: C++
@Datetime: 16-08-10 15:49
*/

#include <algorithm>
class Solution {
public:
    /**
     * @param A an integer array
     * @return void
     */
    void sortIntegers(vector<int>& A)
    {
        // Write your code here
        
        sort(A.begin(), A.end());
    }
};