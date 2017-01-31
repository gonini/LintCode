/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/minimum-subarray
@Language: C++
@Datetime: 16-08-12 06:39
*/

class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: A integer denote the sum of minimum subarray
     */
    int minSubArray(vector<int> nums) 
    {
        // write your code here
        vector<int> seqce(nums.size(), 0);
        
        seqce[0] = nums[0];
        
        int minimum = seqce[0];
        
        for(int i = 1; i < nums.size(); i++)
        {
            seqce[i] = min(nums[i], seqce[i - 1] + nums[i]);
            minimum = min(minimum, seqce[i]);
        }

        return minimum;
    }
};
