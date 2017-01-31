/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/sort-colors
@Language: C++
@Datetime: 16-08-13 13:47
*/

class Solution{
public:
    /**
     * @param nums: A list of integer which is 0, 1 or 2 
     * @return: nothing
     */    
    void sortColors(vector<int> &nums) 
    {
        // write your code here
        
        vector<int> counter(5,0);
        
        for(auto e : nums)
        {
            counter[e]++;
        }
        
        vector<int> seqce;
        
        for(int i = 0; i < counter.size(); i++)
        {
            
            while(counter[i]--)
            {
                seqce.push_back(i);
            }
        }
        
        nums = seqce;
        
    }
};