/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/intersection-of-two-arrays-ii
@Language: C++
@Datetime: 16-08-10 15:21
*/

#include <set>
class Solution {
public:
    /**
     * @param nums1 an integer array
     * @param nums2 an integer array
     * @return an integer array
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        // Write your code here
        multiset<int> set;
        vector<int> ret;
        
        
        for(auto e : nums1)
            set.insert(e);
        
        for(auto e : nums2)
            if(set.count(e) != 0)
            {
                set.erase(set.find(e));
                ret.push_back(e);
            }
                
        
        
        return ret;
    }
};