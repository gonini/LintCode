/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/find-minimum-in-rotated-sorted-array
@Language: C++
@Datetime: 16-08-10 18:25
*/

class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &nums)
    {
        // write your code here
        
        auto it = min_element(nums.begin(), nums.end());
        
        return *it;
    }
};